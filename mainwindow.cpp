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
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Connect signals to slots
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
    } else {
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
    query.prepare("SELECT ID_LOCATAIRE, NOM_LOCATAIRE FROM LOCATAIRE ORDER BY NOM_LOCATAIRE ASC");

    if (!query.exec()) {
        qDebug() << "Error fetching tenant stats: " << query.lastError().text();
        return;
    }

    QBarSet *tenantStatsSet = new QBarSet("Tenants Count");
    QBarSeries *tenantStatsSeries = new QBarSeries();
    QStringList tenantNames;

    while (query.next()) {
        int tenantId = query.value("ID_LOCATAIRE").toInt();
        QString tenantName = query.value("NOM_LOCATAIRE").toString();

        tenantNames << tenantName;
        *tenantStatsSet << tenantId;  // Just counting tenants here
    }
    tenantStatsSeries->append(tenantStatsSet);

    QChart *chart = new QChart();
    chart->addSeries(tenantStatsSeries);
    chart->setTitle("Tenant Statistics");

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(tenantNames);
    chart->addAxis(axisX, Qt::AlignBottom);
    tenantStatsSeries->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, tenantNames.size());
    chart->addAxis(axisY, Qt::AlignLeft);
    tenantStatsSeries->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(800, 600);
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
        while (query.next()) {
            int id = query.value("ID_LOCATAIRE").toInt();
            QDate dateSortie = query.value("DATE_SORTIE").toDate();

            if (dateSortie.isValid()) {
                int joursRestants = QDate::currentDate().daysTo(dateSortie);
                QMessageBox::information(this, "Jours Restants",
                                         QString("Locataire ID %1 - Jours restants : %2").arg(id).arg(joursRestants));
            }
        }
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

