// DhiaMejdi//
#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
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
            // Successful login: Accept the dialog
            QMessageBox::information(this, "Login Success", "Login successful!");
            this->accept();  // Close the dialog
        } else {
            // Invalid ID or password: Reject the dialog
            QMessageBox::warning(this, "Login Failed", "Invalid ID or password.");
            this->reject();  // Do not close the dialog, stay in the dialog
        }
    } else {
        // Query failed
        QMessageBox::critical(this, "Database Error", "Error executing query.");
        this->reject();  // Do not close the dialog if query fails
    }
}
