#include "videowidget.h"
#include "ui_videowidget.h"

videoWidget::videoWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::videoWidget)
{
    ui->setupUi(this);
}

videoWidget::~videoWidget()
{
    delete ui;
}
