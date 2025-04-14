#ifndef LOCA_H
#define LOCA_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlDatabase> // Include this for database connection
#include <QSqlTableModel>

class Loca {
private:
    int id_locataire;
    QString type_locataire;
    QString date_ent;
    QString stat_pay;
    QString nom_locataire;
    QString date_sortie;


public:
    Loca();
    Loca(int, QString, QString, QString, QString, QString);
    bool ajouter();
    QSqlTableModel* afficher();  // pour correspondre à l'implémentation réelle
    bool modifier(int);
    bool supprimer(int);

};

#endif // LOCA_H
