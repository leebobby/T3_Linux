#include "adas.h"
#include "ui_adas.h"

ADAS::ADAS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ADAS)
{
    ui->setupUi(this);
}

ADAS::~ADAS()
{
    delete ui;
}
