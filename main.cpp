#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QDebug>
#include "logger.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    logToFile("🟢 Application started");
    // Vérifier la connexion à la base
    if (!c.createconnect()) {
        QMessageBox::critical(nullptr, QObject::tr("Database Error"),
                              QObject::tr("Connection failed! Check your settings."), QMessageBox::Cancel);
        qDebug() << "❌ Échec de la connexion à la base de données.";
        return -1;
    }

    QMessageBox::information(nullptr, QObject::tr("Database Status"),
                             QObject::tr("Connection successful!"), QMessageBox::Ok);
            logToFile("🟢 connected to database");
    qDebug() << "✅ Connexion à la base de données réussie.";

    // Afficher la boîte de dialogue de login
    Dialog loginDialog;
    if (loginDialog.exec() == QDialog::Accepted) {
        MainWindow w;
        w.show();
        return a.exec();
    }
        return 0;
    }
