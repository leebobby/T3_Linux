#ifndef MAIN_DESKTOP_H
#define MAIN_DESKTOP_H

#include <QWidget>
#include <QDebug>
#include <QPixmap>
#include <QDateTime>
#include <QString>
#include <QTimer>
namespace Ui {
class main_desktop;
}

class main_desktop : public QWidget
{
    Q_OBJECT

public:
    explicit main_desktop(QWidget *parent = 0);
    ~main_desktop();

private:
    Ui::main_desktop *ui;
public slots:
    void timerUpdate(void);
};

#endif // MAIN_DESKTOP_H
