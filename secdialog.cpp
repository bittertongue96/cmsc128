#include "secdialog.h"
#include "ui_secdialog.h"
#include<QMessageBox>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{
    hide();
    thirddialog = new thirdDialog(this);
    thirddialog->show();

}
