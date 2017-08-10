#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <QDialog>
#include <QDebug>
#include <QListWidget>
#include <QString>
#include <QDir>
#include <QDirIterator>
#include <QRect>
namespace Ui {
class videoWidget;
}

class videoWidget : public QDialog
{
    Q_OBJECT

public:
    explicit videoWidget(QWidget *parent = 0);
    ~videoWidget();

private:
    Ui::videoWidget *ui;


};

#endif // VIDEOWIDGET_H
