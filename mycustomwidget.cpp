#include "mycustomwidget.h"
#include "ui_mycustomwidget.h"
#include <QMessageBox>

MyCustomWidget::MyCustomWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyCustomWidget)
{
    ui->setupUi(this);
}

MyCustomWidget::~MyCustomWidget()
{
    delete ui;
}

void MyCustomWidget::on_pushButton_clicked()
{
    QMessageBox::information(this, "Hello from the custom widget!", "Hello from the custom widget!");
}
