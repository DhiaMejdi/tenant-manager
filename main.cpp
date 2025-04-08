#include "mainwindow.h"
#include "connection.h"
#include "qrcodegen.hpp"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Create a Connection object and initialize the database connection
    Connection conn;
    if (!conn.createconnect()) {
        qDebug() << "Failed to connect to the database.";
        return -1;  // Exit if the database connection fails
    }

    MainWindow w;
    w.show();
    return a.exec();
}
