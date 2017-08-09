#include "rear_camera_setting.h"
#include "ui_rear_camera_setting.h"

Rear_Camera_Setting::Rear_Camera_Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rear_Camera_Setting)
{
    ui->setupUi(this);
    connect(ui->returnButton,SIGNAL(clicked(bool)),this,SLOT(on_returnButton_click(bool)));
}

Rear_Camera_Setting::~Rear_Camera_Setting()
{
    delete ui;
}
void Rear_Camera_Setting::on_returnButton_click(bool)
{
    this->close();
}
