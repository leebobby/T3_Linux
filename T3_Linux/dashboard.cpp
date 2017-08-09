#include "dashboard.h"
#include "ui_dashboard.h"

dashBoard::dashBoard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dashBoard)
{
    ui->setupUi(this);
    myspeed=new mySpeed();
    ui->scrollArea->setWidget(myspeed);
    connect(ui->pushButton,SIGNAL(clicked(bool)),SLOT(on_returnButton_clicked()));
}

dashBoard::~dashBoard()
{
    delete ui;
}
void dashBoard::on_returnButton_clicked()
{
    this->close();
}
