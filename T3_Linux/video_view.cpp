#include "video_view.h"
#include "ui_video_view.h"
extern QString which_filename_to_play;

Video_view::Video_view(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Video_view)
{
    ui->setupUi(this);
    qDebug()<<"将要播放的视频名称为："<<which_filename_to_play;
}

Video_view::~Video_view()
{
    delete ui;
}
