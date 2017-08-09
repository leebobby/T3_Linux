#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <QDialog>

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
