#ifndef ADAS_H
#define ADAS_H

#include <QDialog>
#include <QDebug>
#include <QVBoxLayout>
#include "mylabel.h"
namespace Ui {
class ADAS;
}

class ADAS : public QDialog
{
    Q_OBJECT

public:
    explicit ADAS(QWidget *parent = 0);
    ~ADAS();
public slots:
    void on_pictureLabel2_clicked();
    void on_pictureLabel1_clicked();
private:
    Ui::ADAS *ui;
    myLabel* front_ADAS_label;
    myLabel* rear_ADAS_label;
};

#endif // ADAS_H
