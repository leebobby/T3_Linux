#include "video_player.h"
#include "ui_video_player.h"
#include <QOpenGLWidget>
#include <QDirIterator>
extern QString which_filename_to_play;

Video_Player::Video_Player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Video_Player)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    my_video_widget=new video_widgets();
    ui->scrollArea->setWidget(my_video_widget);
    player->setVideoOutput(my_video_widget);
//    ui->horizontalSlider->setRange(0, player->duration() / 1000);


    qDebug()<<"将要播放的视频名称为："<<which_filename_to_play;
    QDirIterator m_DirIterator(QString("E:/tech_practise/T3_linux/T3_Linux/T3_Linux/video"),QDir::Files|QDir::NoSymLinks,QDirIterator::Subdirectories);
    while (m_DirIterator.hasNext()) {
        QString tempFile=m_DirIterator.next();
        qDebug()<<tempFile;
        QString tempFileName=tempFile;
        tempFileName=tempFileName.remove(QString("E:/tech_practise/T3_linux/T3_Linux/T3_Linux/video/"),Qt::CaseSensitive);

        if(which_filename_to_play==tempFileName){
            player->setMedia(QMediaContent(QUrl::fromLocalFile(tempFile)));
            player->play();
            break;
        }
        else{
            continue;
        }
    }
    qDebug()<<"退出循环";
}

Video_Player::~Video_Player()
{
    delete ui;
}
void Video_Player::seek(int seconds)
{
    player->setPosition(seconds * 1000);
}

void Video_Player::on_playButton_clicked()
{

}

void Video_Player::on_pauseButton_clicked()
{

}

void Video_Player::on_stopButton_clicked()
{

}

void Video_Player::on_muteButton_clicked()
{

}

void Video_Player::on_voiceSlider_sliderMoved(int position)
{

}

void Video_Player::on_progressSlider_sliderMoved(int position)
{

}
