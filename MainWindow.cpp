#include "ui_MainWindow.h"
#include "MainWindow.h"
#include "RegisterDialog.h"

MainWindow::MainWindow(QWidget *parent) : ui(new Ui::MainWindow), QMainWindow(parent) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_RegisterButton_clicked() {
    RegisterDialog registerDialog(this);

    registerDialog.exec();
}