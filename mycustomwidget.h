#ifndef MYCUSTOMWIDGET_H
#define MYCUSTOMWIDGET_H

#include <QWidget>

namespace Ui {
class MyCustomWidget;
}

class MyCustomWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyCustomWidget(QWidget *parent = 0);
    ~MyCustomWidget();

public slots:
    void on_pushButton_clicked();

private:
    Ui::MyCustomWidget *ui;
};

#endif // MYCUSTOMWIDGET_H
