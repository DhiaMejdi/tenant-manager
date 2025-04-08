#include "loca.h"
#include "qrcodegen.hpp"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QDateEdit>

Loca::Loca() {
    id_locataire = 0;
    type_locataire = "";
    date_ent = "";
    stat_pay = "";
    nom_locataire = "";
    date_sortie = "";
}

Loca::Loca(int id, QString type, QString dateE, QString statut, QString nom, QString dateS) {
    id_locataire = id;
    type_locataire = type;
    date_ent = dateE;
    stat_pay = statut;
    nom_locataire = nom;
    date_sortie = dateS;
}

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
        return true;  // Requête exécutée avec succès
    } else {
        qDebug() << "Erreur SQL : " << query.lastError().text();
        return false;  // Requête échouée
    }
}

QSqlQueryModel* Loca::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM LOCATAIRE");

    if (model->lastError().isValid()) {
        qDebug() << "Erreur SQL : " << model->lastError().text();
    }

    return model;
}

bool Loca::modifier(int id) {
    QSqlQuery query;

    // Format des dates en utilisant QDateEdit
    QString dateEFormatted = QDate::fromString(date_ent, "yyyy-MM-dd").toString("yyyy-MM-dd");
    QString dateSFormatted = QDate::fromString(date_sortie, "yyyy-MM-dd").toString("yyyy-MM-dd");

    // Préparer la requête de mise à jour
    query.prepare("UPDATE LOCATAIRE SET TYPE_LOCATAIRE=:type, DATE_ENT=TO_DATE(:dateE, 'YYYY-MM-DD'), STAT_PAY=:statut, NOM_LOCATAIRE=:nom, DATE_SORTIE=TO_DATE(:dateS, 'YYYY-MM-DD') "
                  "WHERE ID_LOCATAIRE=:id");

    query.bindValue(":id", id);
    query.bindValue(":type", type_locataire);
    query.bindValue(":dateE", dateEFormatted);  // Utiliser la date formatée
    query.bindValue(":statut", stat_pay);
    query.bindValue(":nom", nom_locataire);
    query.bindValue(":dateS", dateSFormatted);  // Utiliser la date formatée

    return query.exec();
}

bool Loca::supprimer(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM LOCATAIRE WHERE ID_LOCATAIRE = :id");
    query.bindValue(":id", id);

    return query.exec();
}
