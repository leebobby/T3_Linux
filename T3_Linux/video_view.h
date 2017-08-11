#ifndef VIDEO_VIEW_H
#define VIDEO_VIEW_H

#include <QDialog>
#include <QDebug>
#include <QMediaPlayer>
#include <video_widgets.h>
#include <QMediaObject>
namespace Ui {
class Video_view;
}

class Video_view : public QDialog
{
    Q_OBJECT

public:
    explicit Video_view(QWidget *parent = 0);
    ~Video_view();
signals:
    void play();
    void pause();
    void stop();
    void previous();
    void changeVolume(int volume);
    void changeMuting(bool muting);
public slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_stopButton_clicked();

    void on_voiceButton_clicked();

    void seek(int seconds);

private:
    QMediaPlayer::State playerState;
    Ui::Video_view *ui;
    video_widgets* my_video_widget;
    QMediaPlayer *player;
};

#endif // VIDEO_VIEW_H
