#ifndef MAIN_DESKTOP_H
#define MAIN_DESKTOP_H

#include <QWidget>
#include <QDebug>
#include <QPixmap>
#include <QDateTime>
#include <QString>
#include <QTimer>
#include <QPalette>
//#include <settings.h>
#include "setfirst.h"
#include "dashboard.h"
#include "moviedesk.h"
namespace Ui {
class main_desktop;
}

class main_desktop : public QWidget
{
    Q_OBJECT

public:
    explicit main_desktop(QWidget *parent = 0);
    ~main_desktop();
private://用于检测是否有动作
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

    void on_mouse_active();
private:
    Ui::main_desktop *ui;
    bool cameraState;//摄像头前后状态：true=前置；false=后置
    QTimer *mouseMoveTime;//检测鼠标离开的时间
    void accept();
public slots:
    void timerUpdate(void);
    void cameraChange();//前后摄像头切换
private slots://有动作时显示图标
    void on_mouse_no_active_10_second();
public slots://其它界面调出
    void show_settingDesk();
    void show_movieDesk();
    void show_photoDesk();
    void show_dashboard();
private://界面类
    SetFirst *setting_desktop;
    dashBoard *dashboards;
    movieDesk *moviedesk;
//public slots://返回值
//    void recieve_setting_data(results);

};

#endif // MAIN_DESKTOP_H
