#include "reverseline.h"
#include "ui_reverseline.h"

ReverseLine::ReverseLine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReverseLine)
{
    ui->setupUi(this);
}

ReverseLine::~ReverseLine()
{
    delete ui;
}
