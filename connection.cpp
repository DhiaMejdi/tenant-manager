#include "connection.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

Connection::Connection() {}

bool Connection::createconnect() {
    bool test = false;

    // Use QODBC to set up the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    // Set the DSN (Data Source Name) configured in your ODBC settings
    db.setDatabaseName("projet");  // Ensure this matches your configured DSN

    // Set the username and password (if required)
    db.setUserName("dhia");
    db.setPassword("dhia");

    // Attempt to open the connection
    if (db.open()) {
        test = true;
        qDebug() << "Database connected successfully!";
    } else {
        qDebug() << "Database Error: " << db.lastError().text();  // Output detailed error message
    }

    return test;
}
