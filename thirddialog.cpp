#include "thirddialog.h"
#include "ui_thirddialog.h"
#include<QMessageBox>

thirdDialog::thirdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdDialog)
{
    ui->setupUi(this);
}

thirdDialog::~thirdDialog()
{
    delete ui;
}

void thirdDialog::on_pushButton_clicked()
{
    hide();
    fourthdialog = new fourthDialog(this);
    fourthdialog->show();

}
