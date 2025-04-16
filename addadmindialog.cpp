#include "addadmindialog.h"
#include "ui_addadmindialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QPushButton>

AddAdminDialog::AddAdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAdminDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Register");
    this->setWindowIcon(QIcon(":/register.png"));

    // Connexion du signal clicked() de QPushButton
    connect(ui->submitButton, &QPushButton::clicked, this, &AddAdminDialog::addAdminToDatabase);
}

AddAdminDialog::~AddAdminDialog()
{
    delete ui;
}

void AddAdminDialog::addAdminToDatabase()
{
    QString id = ui->idInput->text();                  // au lieu de rz
    QString pass = ui->passwordInput->text();          // au lieu de fezf
    QString confirm = ui->confirmPasswordInput->text(); // au lieu de efr

    if (id.isEmpty() || pass.isEmpty() || confirm.isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Veuillez remplir tous les champs.");
        return;
    }

    if (pass != confirm) {
        QMessageBox::critical(this, "Erreur", "Les mots de passe ne correspondent pas.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO USERS (ID, PASSWORD) VALUES (:id, :pass)");
    query.bindValue(":id", id);
    query.bindValue(":pass", pass);

    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Admin ajouté avec succès.");
        this->accept();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout dans la base.");
    }
}
