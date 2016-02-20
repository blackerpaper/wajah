#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : ui(new Ui::MainWindow), QMainWindow(parent) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}