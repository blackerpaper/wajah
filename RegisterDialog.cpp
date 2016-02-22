#include "RegisterDialog.h"
#include "ui_RegisterDialog.h"

RegisterDialog::RegisterDialog(QWidget *parent) : QDialog(parent), ui(new Ui::RegisterDialog) {
    ui->setupUi(this);
}

RegisterDialog::~RegisterDialog() {
    delete ui;
}

void RegisterDialog::on_ScanButton_clicked() {

}