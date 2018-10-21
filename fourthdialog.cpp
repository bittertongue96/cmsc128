#include "fourthdialog.h"
#include "ui_fourthdialog.h"

fourthDialog::fourthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fourthDialog)
{
    ui->setupUi(this);
}

fourthDialog::~fourthDialog()
{
    delete ui;
}

void fourthDialog::on_pushButton_clicked()
{
  // Do stuff for paying
  //Link back to back to main
}
