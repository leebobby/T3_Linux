#include "main_desktop.h"
#include "ui_main_desktop.h"

main_desktop::main_desktop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_desktop)
{
    ui->setupUi(this);

    //设置窗口为固定大小
    this->setMaximumSize(610,215);
    this->setMinimumSize(610,215);

    //设置按钮图标
    //对于当点击图标后按钮的变化的效果可以使用多张图片的方式进行
    ui->cameraButton->setStyleSheet(tr("background-image: url(:/image/image/camera.png);"));
    ui->camera_change_Button->setStyleSheet(tr("background-image: url(:/image/image/change.png);"));
    ui->lockButton->setStyleSheet(tr("background-image: url(:/image/image/lock.png);"));
    ui->movieButton->setStyleSheet(tr("background-image: url(:/image/image/movie.png);"));
    ui->recordButton->setStyleSheet(tr("background-image: url(:/image/image/record.png);"));
    ui->settingButton->setStyleSheet(tr("background-image: url(:/image/image/setting.png);"));

    //设置系统时间和显示
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(10);
    QFont ft;
    ft.setPointSize(12);
    ui->time_Label->setFont(ft);
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::red);
    ui->time_Label->setPalette(pa);


}

main_desktop::~main_desktop()
{
    delete ui;
}
void main_desktop::timerUpdate(void)
{
    QDateTime current_time = QDateTime::currentDateTime();//获取系统现在的时间
    QString time= current_time.toString("hh:mm:ss ddd"); //设置显示格式
    ui->time_Label->setText(time);//在标签上显示时间
}
