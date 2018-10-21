#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H

#include <QDialog>
#include "fourthdialog.h"

namespace Ui {
class thirdDialog;
}

class thirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit thirdDialog(QWidget *parent = nullptr);
    ~thirdDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::thirdDialog *ui;
    fourthDialog *fourthdialog;
};

#endif // THIRDDIALOG_H
