#ifndef ADDADMINDIALOG_H
#define ADDADMINDIALOG_H

#include <QDialog>

namespace Ui {
class AddAdminDialog;
}

class AddAdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddAdminDialog(QWidget *parent = nullptr);
    ~AddAdminDialog();

private slots:
    void addAdminToDatabase();
private:
    Ui::AddAdminDialog *ui;
};

#endif // ADDADMINDIALOG_H
