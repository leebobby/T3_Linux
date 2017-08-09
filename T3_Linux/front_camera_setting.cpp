#include "front_camera_setting.h"
#include "ui_front_camera_setting.h"

Front_camera_setting::Front_camera_setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Front_camera_setting)
{
    ui->setupUi(this);
    connect(ui->returnButton,SIGNAL(clicked(bool)),this,SLOT(on_returnButton_click(bool)));
}

Front_camera_setting::~Front_camera_setting()
{
    delete ui;
}
void Front_camera_setting::on_returnButton_click(bool)
{
    this->close();
}
