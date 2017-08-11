#ifndef VIDEO_VIEW_H
#define VIDEO_VIEW_H

#include <QDialog>
#include <QDebug>
namespace Ui {
class Video_view;
}

class Video_view : public QDialog
{
    Q_OBJECT

public:
    explicit Video_view(QWidget *parent = 0);
    ~Video_view();

private:
    Ui::Video_view *ui;
};

#endif // VIDEO_VIEW_H
