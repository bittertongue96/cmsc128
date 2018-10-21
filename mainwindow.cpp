#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
//#include "status.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Continuebutton_clicked()
{
  //  ui->Status->setText("Button is clicked");
  //  QMessageBox::warning(this,"Notice","By Clicking 'OK', credits shall be debited from your account! ");

   // status status_A;
  // status_A.setModal(true);
  // status_A.exec();
   hide();
   secDialog = new SecDialog(this);
   secDialog->show();



}
