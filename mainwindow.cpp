#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Loca.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QtCharts>
#include <QBarSet>
#include <QBarSeries>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QChartView>
#include <QPixmap>
#include <QImage>
#include <qrcodegen.hpp>
#include <QDebug>
#include <QSqlTableModel>
#include "AddAdminDialog.h"
#include "logger.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("CenterFlow");
    this->setWindowIcon(QIcon(":/centerflow.png"));
    connect(ui->generateQRCodeButton, &QPushButton::clicked, this, [this]() {
        this->generateQRCodeFromLocataire();
    });
    connect(ui->displayStatsButton, &QPushButton::clicked, this, &MainWindow::displayTenantStats);
    connect(ui->exportButton, &QPushButton::clicked, this, &MainWindow::exportPlayerListToPDF);
    connect(ui->insertButton, &QPushButton::clicked, this, &MainWindow::onInsert);
    connect(ui->readButton, &QPushButton::clicked, this, &MainWindow::onRead);
    connect(ui->updateButton, &QPushButton::clicked, this, &MainWindow::onUpdate);
    connect(ui->deleteButton, &QPushButton::clicked, this, &MainWindow::onDelete);
    connect(ui->sortButton, &QPushButton::clicked, this, &MainWindow::onSort);
    connect(ui->searchButton, &QPushButton::clicked, this, &MainWindow::rechercherParId);
    connect(ui->joursRestantsButton, &QPushButton::clicked, this, &MainWindow::calculerEtAfficherJoursRestants);
    connect(ui->addAdminButton, &QPushButton::clicked, this, &MainWindow::openAddAdminDialog);
    connect(ui->sortByEntryDateButton, &QPushButton::clicked, this, &MainWindow::onSortByEntryDate);
    connect(ui->sortByDateButton, &QPushButton::clicked, this, &MainWindow::trierParDateSortie);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onInsert()
{
    int id = ui->idInput->text().toInt();
    QString type = ui->typeInput->text();
    QString dateE = ui->dateEntInput->text();
    QString statut = ui->statPayInput->currentText();
    QString nom = ui->nomInput->text();
    QString dateS = ui->dateSortieInput->text();

    Loca l(id, type, dateE, statut, nom, dateS);

    if (l.ajouter()) {
        QMessageBox::information(this, "Succès", "Locataire ajouté !");
    } else {
        QMessageBox::warning(this, "Erreur", "Ajout échoué !");
    }
}
void MainWindow::onRead()
{
    Loca l;
    QSqlTableModel* model = l.afficher();

    if (model) {
        ui->tableView->setModel(model);

        // Active et ajuste les entêtes
        ui->tableView->horizontalHeader()->setVisible(true);
        ui->tableView->horizontalHeader()->setStretchLastSection(true);
        ui->tableView->resizeColumnsToContents();

        // Affichage plus clair
        ui->tableView->setAlternatingRowColors(true);
        ui->tableView->setShowGrid(true);
    } else {
        QMessageBox::warning(this, "Erreur", "Aucune donnée à afficher.");
    }
}

void MainWindow::onUpdate()
{
    int id = ui->idInput->text().toInt();
    QString type = ui->typeInput->text();
    QString dateE = ui->dateEntInput->text();
    QString statut = ui->statPayInput->currentText();
    QString nom = ui->nomInput->text();
    QString dateS = ui->dateSortieInput->text();

    Loca l(id, type, dateE, statut, nom, dateS);
    if (l.modifier(id)) {
        QMessageBox::information(this, "Succès", "Modification réussie !");
    } else {
        QMessageBox::warning(this, "Erreur", "Modification échouée !");
    }
}

void MainWindow::onDelete()
{
    int id = ui->idInput->text().toInt();

    Loca l(id, "", "", "", "", "");
    if (l.supprimer(id)) {
        QMessageBox::information(this, "Succès", "Suppression réussie !");
    } else {
        QMessageBox::warning(this, "Erreur", "Suppression échouée !");
    }
}

void MainWindow::onSort()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM LOCATAIRE");

    if (query.exec()) {
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);

        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel();
        proxyModel->setSourceModel(model);
        proxyModel->setSortRole(Qt::DisplayRole);
        proxyModel->sort(1, Qt::AscendingOrder);  // Sort by the NOM_LOCATAIRE column (index 1)
        ui->tableView->setModel(proxyModel);
        qDebug() << "Erreur SQL : " << query.lastError().text();
        QMessageBox::warning(this, "Erreur", "Impossible de trier les locataires.");
    }
}

void MainWindow::exportPlayerListToPDF()
{
    QString filePath = QFileDialog::getSaveFileName(this, tr("Save PDF"), "", tr("PDF Files (*.pdf)"));
    if (filePath.isEmpty()) {
        return;
    }

    QString html;
    html += "<h2>Locataire List</h2>";
    html += "<table border='1' cellspacing='0' cellpadding='4'>";
    html += "<thead><tr>";
    QStringList headers = {"ID_LOCATAIRE", "NOM_LOCATAIRE", "TYPE_LOCATAIRE", "DATE_ENT", "DATE_SORTIE"};
    for (const QString &header : headers) {
        html += QString("<th>%1</th>").arg(header);
    }
    html += "</tr></thead>";

    QSqlQuery query("SELECT ID_LOCATAIRE, NOM_LOCATAIRE, TYPE_LOCATAIRE, DATE_ENT, DATE_SORTIE FROM LOCATAIRE");
    html += "<tbody>";
    while (query.next()) {
        html += "<tr>";
        for (int i = 0; i < headers.size(); ++i) {
            QString cellData = query.value(i).toString();
            html += QString("<td>%1</td>").arg(cellData);
        }
        html += "</tr>";
    }
    html += "</tbody></table>";

    QTextDocument document;
    document.setHtml(html);

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(filePath);
    document.print(&printer);

    QMessageBox::information(this, "Succès", "Liste des locataires exportée en PDF !");
}

void MainWindow::displayTenantStats()
{
    QSqlQuery query;
    query.prepare(R"(
        SELECT TYPE_LOCATAIRE, COUNT(*) AS total
        FROM LOCATAIRE
        GROUP BY TYPE_LOCATAIRE
        ORDER BY total DESC
    )");

    if (!query.exec()) {
        qDebug() << "Erreur lors de la récupération des stats : " << query.lastError().text();
        return;
    }

    QBarSet *barSet = new QBarSet("Locataires par type");
    QStringList categories;

    while (query.next()) {
        QString type = query.value("TYPE_LOCATAIRE").toString();
        int count = query.value("total").toInt();

        categories << type;
        *barSet << count;
    }

    QBarSeries *series = new QBarSeries();
    series->append(barSet);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Nombre de locataires par type");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Nombre");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(900, 600);
    chartView->show();
}

void MainWindow::rechercherParId()
{
    bool ok;
    int id = ui->idSearchInput->text().toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT ID_LOCATAIRE, NOM_LOCATAIRE, TYPE_LOCATAIRE, DATE_ENT, DATE_SORTIE FROM LOCATAIRE WHERE ID_LOCATAIRE = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        if (query.next()) {
            QString nomLocataire = query.value("NOM_LOCATAIRE").toString();
            QString typeLocataire = query.value("TYPE_LOCATAIRE").toString();
            QDate dateEntree = query.value("DATE_ENT").toDate();
            QDate dateSortie = query.value("DATE_SORTIE").toDate();

            QString info = QString("Locataire trouvé :\n"
                                   "Nom : %1\n"
                                   "Type : %2\n"
                                   "Date d'entrée : %3\n"
                                   "Date de sortie : %4")
                               .arg(nomLocataire)
                               .arg(typeLocataire)
                               .arg(dateEntree.toString("dd/MM/yyyy"))
                               .arg(dateSortie.isValid() ? dateSortie.toString("dd/MM/yyyy") : "Non spécifiée");

            QMessageBox::information(this, "Informations du Locataire", info);
        } else {
            QMessageBox::information(this, "Résultat de la recherche", "Le locataire n'existe pas.");
        }
    } else {
        qDebug() << "Erreur SQL : " << query.lastError().text();
        QMessageBox::warning(this, "Erreur", "Impossible de rechercher le locataire.");
    }
}

void MainWindow::calculerEtAfficherJoursRestants()
{
    QSqlQuery query;
    query.prepare("SELECT ID_LOCATAIRE, NOM_LOCATAIRE, DATE_ENT, DATE_SORTIE FROM LOCATAIRE");

    if (query.exec()) {
        QString result;  // Une variable pour stocker tous les résultats

        while (query.next()) {
            int id = query.value("ID_LOCATAIRE").toInt();
            QString nomLocataire = query.value("NOM_LOCATAIRE").toString();
            QDate dateSortie = query.value("DATE_SORTIE").toDate();

            // Debug : Afficher chaque locataire traité
            qDebug() << "Traitement Locataire ID" << id << "Nom:" << nomLocataire;

            if (dateSortie.isValid()) {
                // Calcul du nombre de jours restants
                int joursRestants = QDate::currentDate().daysTo(dateSortie);

                // Ajout du résultat de chaque locataire dans la chaîne
                result += QString("Locataire ID %1 (%2) - Jours restants : %3\n")
                              .arg(id).arg(nomLocataire).arg(joursRestants);
            } else {
                result += QString("Locataire ID %1 (%2) - Date de sortie invalide\n")
                .arg(id).arg(nomLocataire);
            }
        }

        // Si des résultats sont collectés, afficher une seule boîte de message
        if (!result.isEmpty()) {
            QMessageBox::information(this, "Jours Restants", result);
        } else {
            QMessageBox::information(this, "Aucun locataire", "Aucun locataire avec une date de sortie valide.");
        }
    } else {
        qDebug() << "Erreur lors de la récupération des locataires : " << query.lastError().text();
        QMessageBox::warning(this, "Erreur", "Impossible de récupérer les locataires.");
    }
}

void MainWindow::generateQRCodeFromLocataire()
{
    bool ok;
    int id = ui->idSearchInput->text().toInt(&ok);
    if (!ok || id == 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT NOM_LOCATAIRE FROM LOCATAIRE WHERE ID_LOCATAIRE = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        if (query.next()) {
            QString locataireName = query.value("NOM_LOCATAIRE").toString();

            qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(locataireName.toStdString().c_str(), qrcodegen::QrCode::Ecc::LOW);
            int qrSize = qr.getSize();

            QImage qrImage(qrSize, qrSize, QImage::Format_RGB888);

            for (int y = 0; y < qrSize; ++y) {
                for (int x = 0; x < qrSize; ++x) {
                    QColor color = qr.getModule(x, y) ? Qt::black : Qt::white;
                    qrImage.setPixel(x, y, color.rgb());
                }
            }

            QPixmap pixmap = QPixmap::fromImage(qrImage);

            ui->qrCodeLabel->setFixedSize(161, 141);
            QPixmap scaledPixmap = pixmap.scaled(ui->qrCodeLabel->size(), Qt::KeepAspectRatio);
            ui->qrCodeLabel->setPixmap(scaledPixmap);
        } else {
            QMessageBox::information(this, "Erreur", "Locataire non trouvé.");
        }
    }
}
void MainWindow::openAddAdminDialog()
{
    AddAdminDialog dialog(this);  // Utilise la vraie classe
    dialog.exec();  // Affiche le vrai formulaire conçu
}
void MainWindow::onSortByEntryDate()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM LOCATAIRE ORDER BY DATE_ENT ASC");

    if (query.exec()) {
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);

        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel();
        proxyModel->setSourceModel(model);
        proxyModel->setSortRole(Qt::DisplayRole);
        proxyModel->sort(3, Qt::AscendingOrder);  // Tri par la date d'entrée (colonne index 3)

        ui->tableView->setModel(proxyModel);
    } else {
        qDebug() << "Erreur SQL : " << query.lastError().text();
        QMessageBox::warning(this, "Erreur", "Impossible de trier les locataires par date d'entrée.");
    }
}
void MainWindow::trierParDateSortie()
{
    QSqlQuery query;
    query.prepare("SELECT ID_LOCATAIRE, NOM_LOCATAIRE, TYPE_LOCATAIRE, DATE_ENT, DATE_SORTIE FROM LOCATAIRE ORDER BY DATE_SORTIE ASC");  // Tri croissant par DATE_SORTIE

    if (query.exec()) {
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);

        ui->tableView->setModel(model);
        // Vous pouvez également personnaliser l'affichage du tableau
        ui->tableView->resizeColumnsToContents(); // Ajuste la taille des colonnes
        ui->tableView->horizontalHeader()->setStretchLastSection(true);  // Étend la dernière colonne
    } else {
        qDebug() << "Erreur SQL lors du tri par date de sortie : " << query.lastError().text();
        QMessageBox::warning(this, "Erreur", "Impossible de trier les locataires par date de sortie.");
    }
}
