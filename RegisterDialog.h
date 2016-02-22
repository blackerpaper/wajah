#ifndef WAJAH_REGISTERDIALOG_H
#define WAJAH_REGISTERDIALOG_H

#include <QDialog>
#include <ui_RegisterDialog.h>

namespace Ui { class RegisterDialog; }

class RegisterDialog : public QDialog {
Q_OBJECT
public:
    RegisterDialog(QWidget *parent);

    ~RegisterDialog();

private slots:

    void on_ScanButton_clicked();

private:
    Ui::RegisterDialog *ui;
};

#endif //WAJAH_REGISTERDIALOG_H
