#include "video_view.h"
#include "ui_video_view.h"
#include <QOpenGLWidget>
#include <QDirIterator>
extern QString which_filename_to_play;

Video_view::Video_view(QWidget *parent) :
    QDialog(parent),playerState(QMediaPlayer::StoppedState),
    ui(new Ui::Video_view)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    my_video_widget=new video_widgets();
    ui->scrollArea->setWidget(my_video_widget);
    player->setVideoOutput(my_video_widget);
//    ui->horizontalSlider->setRange(0, player->duration() / 1000);
    connect(ui->startButton,SIGNAL(clicked()),this,SLOT(on_startButton_clicked()));
    connect(ui->pauseButton,SIGNAL(clicked()),this,SLOT(on_pauseButton_clicked()));
    connect(ui->stopButton,SIGNAL(clicked()),this,SLOT(on_stopButton_clicked()));

    connect(ui->horizontalSlider, SIGNAL(sliderMoved(int)), this, SLOT(seek(int)));

    ui->fullScreenButton->setEnabled(true);

//    qDebug()<<"将要播放的视频名称为："<<which_filename_to_play;
//    QDirIterator m_DirIterator(QString("E:/tech_practise/T3_linux/T3_Linux/T3_Linux/video"),QDir::Files|QDir::NoSymLinks,QDirIterator::Subdirectories);
//    while (m_DirIterator.hasNext()) {
//        QString tempFile=m_DirIterator.next();
//        qDebug()<<tempFile;
//        QString tempFileName=tempFile;
//        tempFileName=tempFileName.remove(QString("E:/tech_practise/T3_linux/T3_Linux/T3_Linux/video/"),Qt::CaseSensitive);

//        if(which_filename_to_play==tempFileName){
//            player->setMedia(QMediaContent(QUrl::fromLocalFile(tempFile)));
//            player->play();
//            break;
//        }
//        else{
//            continue;
//        }
//    }
//    qDebug()<<"退出循环";
}

Video_view::~Video_view()
{
    delete ui;
}

void Video_view::on_startButton_clicked()
{
    qDebug()<<"start video";
    player->play();
}

void Video_view::on_pauseButton_clicked()
{
    qDebug()<<"pause video";
    player->pause();
}

void Video_view::on_stopButton_clicked()
{
    qDebug()<<"close video";
    player->stop();
}


void Video_view::on_voiceButton_clicked()
{
//    emit changeMuting(!playerMuted);
}
void Video_view::seek(int seconds)
{
    player->setPosition(seconds * 1000);
}
