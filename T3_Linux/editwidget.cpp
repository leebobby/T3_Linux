#include "editwidget.h"
#include "ui_editwidget.h"

editWidget::editWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editWidget)
{
    ui->setupUi(this);
}

editWidget::~editWidget()
{
    delete ui;
}
