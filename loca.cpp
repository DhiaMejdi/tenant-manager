#include "loca.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QDebug>
#include "logger.h"
#include <QDate>

// Constructeur par défaut
Loca::Loca() {}

// Constructeur avec paramètres
Loca::Loca(int id, QString type, QString dateE, QString statut, QString nom, QString dateS)
    : id_locataire(id), type_locataire(type), date_ent(dateE),
    stat_pay(statut), nom_locataire(nom), date_sortie(dateS) {}

// Méthode pour ajouter un locataire à la base de données
bool Loca::ajouter() {
    QSqlQuery query;

    // Format des dates en utilisant QDateEdit
    QString dateEFormatted = QDate::fromString(date_ent, "yyyy-MM-dd").toString("yyyy-MM-dd");
    QString dateSFormatted = QDate::fromString(date_sortie, "yyyy-MM-dd").toString("yyyy-MM-dd");

    // Préparer la requête d'insertion
    query.prepare("INSERT INTO LOCATAIRE (ID_LOCATAIRE, TYPE_LOCATAIRE, DATE_ENT, STAT_PAY, NOM_LOCATAIRE, DATE_SORTIE) "
                  "VALUES (:id, :type, TO_DATE(:dateE, 'YYYY-MM-DD'), :statut, :nom, TO_DATE(:dateS, 'YYYY-MM-DD'))");

    query.bindValue(":id", id_locataire);
    query.bindValue(":type", type_locataire);
    query.bindValue(":dateE", dateEFormatted);  // Utiliser la date formatée
    query.bindValue(":statut", stat_pay);
    query.bindValue(":nom", nom_locataire);
    query.bindValue(":dateS", dateSFormatted);  // Utiliser la date formatée

    // Exécuter la requête et vérifier l'erreur
    if (query.exec()) {
        // Ajouter la trace après l'ajout du locataire
        logToFile("Locataire ajouté : " + QString::number(id_locataire) + ", " + nom_locataire);
        return true;  // Requête exécutée avec succès
    } else {
        qDebug() << "Erreur SQL : " << query.lastError().text();
        return false;  // Requête échouée
    }
}
QSqlTableModel* Loca::afficher()
{
    QSqlTableModel* model = new QSqlTableModel();
    model->setTable("LOCATAIRE");                     // Nom exact de ta table
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();                                  // Charge les données

    // Vérifie l'ordre réel des colonnes dans ta base !
    // Puis définis des noms jolis pour les en-têtes :
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Nom");
    model->setHeaderData(2, Qt::Horizontal, "Type");
    model->setHeaderData(3, Qt::Horizontal, "Date d'entrée");
    model->setHeaderData(4, Qt::Horizontal, "Statut de paiement");
    model->setHeaderData(5, Qt::Horizontal, "Date de sortie");
    logToFile("Locataire afficher : " + QString::number(id_locataire) + ", " + nom_locataire);

    return model;
}
// Méthode pour modifier les informations d'un locataire
bool Loca::modifier(int id) {
    QSqlQuery query;
    query.prepare("UPDATE LOCATAIRE SET TYPE_LOCATAIRE = :type, DATE_ENT = :dateE, STATUT_PAIEMENT = :statut, "
                  "NOM_LOCATAIRE = :nom, DATE_SORTIE = :dateS WHERE ID_LOCATAIRE = :id");

    query.bindValue(":id", id);
    query.bindValue(":type", type_locataire);
    query.bindValue(":dateE", date_ent);
    query.bindValue(":statut", stat_pay);
    query.bindValue(":nom", nom_locataire);
    query.bindValue(":dateS", date_sortie);

    if (query.exec()) {
        logToFile("Modification du locataire ID: " + QString::number(id));
        return true;
    } else {
        logToFile("Échec de la modification du locataire ID: " + QString::number(id));
        qDebug() << query.lastError().text();
        return false;
    }
}

// Méthode pour supprimer un locataire
bool Loca::supprimer(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM LOCATAIRE WHERE ID_LOCATAIRE = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        logToFile("Suppression du locataire ID: " + QString::number(id));
        return true;
    } else {
        logToFile("Échec de la suppression du locataire ID: " + QString::number(id));
        qDebug() << query.lastError().text();
        return false;
    }
}
