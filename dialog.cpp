// DhiaMejdi//
#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "logger.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");
}
Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_loginButton_clicked()
{
    QString userId = ui->idLineEdit->text().trimmed();
    QString password = ui->passwordLineEdit->text().trimmed();

    // Check if userId and password are not empty
    if (userId.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both ID and password.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM USERS WHERE ID = :id AND PASSWORD = :password");
    query.bindValue(":id", userId);
    query.bindValue(":password", password);

    // Execute the query and handle results
    if (query.exec()) {
        if (query.next()) {
            //Successful login: Accept the dialog
            logToFile("Login attempt by user ID: " + userId);
            QMessageBox::information(this, "Login Success", "Login successful!");
            this->accept();  // Close the dialog
        } else {
            // Invalid ID or password: Reject the dialog
            logToFile("Login faild: " + userId);
            QMessageBox::warning(this, "Login Failed", "Invalid ID or password.");
        }
    } else {
        // Query failed
        QMessageBox::critical(this, "Database Error", "Error executing query.");
        this->reject();  // Do not close the dialog if query fails
    }
}
