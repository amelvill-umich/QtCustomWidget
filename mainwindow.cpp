#include "mainwindow.h"
#include "ui_mainwindow.h"

typedef void (MyCustomWidget::*customSlot)(void);

typedef void (MainWindow::*mainSlot)(void);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this, &MainWindow::SignalCustomWidget, ui->customWidget, &MyCustomWidget::on_pushButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSignalWidget_clicked()
{
    SignalCustomWidget();
}
