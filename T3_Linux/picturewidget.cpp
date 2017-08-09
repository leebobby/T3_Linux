#include "picturewidget.h"
#include "ui_picturewidget.h"

pictureWidget::pictureWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pictureWidget)
{
    ui->setupUi(this);
}

pictureWidget::~pictureWidget()
{
    delete ui;
}
