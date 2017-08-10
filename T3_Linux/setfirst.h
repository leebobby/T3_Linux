#ifndef SETFIRST_H
#define SETFIRST_H

#include <QDialog>
#include <QDebug>
#include <settings.h>

namespace Ui {
class SetFirst;
}

class SetFirst : public QDialog
{
    Q_OBJECT

public:
    explicit SetFirst(QWidget *parent = 0);
    ~SetFirst();
public slots://界面切换
    void on_click_setttingsButton(bool);
    void on_click_returnButton(bool);
    void on_audioButton_clicked();
    void on_ADASButton_clicked();
    void on_movieButton_clicked();
    void on_reverseButton_clicked();
public slots:
    void on_slider_valuechanged(int);
private slots:
    void on_voiceButton_clicked();

private:
    Ui::SetFirst *ui;
    Settings* setSecond_Desk;
};

#endif // SETFIRST_H
