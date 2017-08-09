#ifndef REAR_CAMERA_SETTING_H
#define REAR_CAMERA_SETTING_H

#include <QDialog>

namespace Ui {
class Rear_Camera_Setting;
}

class Rear_Camera_Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Rear_Camera_Setting(QWidget *parent = 0);
    ~Rear_Camera_Setting();
public slots:
    void on_returnButton_click(bool);
private:
    Ui::Rear_Camera_Setting *ui;
};

#endif // REAR_CAMERA_SETTING_H
