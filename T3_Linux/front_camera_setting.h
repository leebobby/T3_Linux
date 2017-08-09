#ifndef FRONT_CAMERA_SETTING_H
#define FRONT_CAMERA_SETTING_H

#include <QDialog>

namespace Ui {
class Front_camera_setting;
}

class Front_camera_setting : public QDialog
{
    Q_OBJECT

public:
    explicit Front_camera_setting(QWidget *parent = 0);
    ~Front_camera_setting();
public slots:
    void on_returnButton_click(bool);
private:
    Ui::Front_camera_setting *ui;
};

#endif // FRONT_CAMERA_SETTING_H
