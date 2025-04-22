#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QDebug>
#include "logger.h"
#include "addadmindialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":styles/stylesheet.qss");  // Assurez-vous de placer le fichier .qss dans un répertoire adapté
    if (file.open(QFile::ReadOnly)) {
        QString style = file.readAll();
        a.setStyleSheet(style);
    }
    Connection c;
    logToFile("🟢 Application started");
    // Vérifier la connexion à la base
    if (!c.createconnect()) {
        qDebug() << "❌ Échec de la connexion à la base de données.";
        return -1;
    }
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
