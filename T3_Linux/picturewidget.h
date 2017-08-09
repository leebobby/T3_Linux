#ifndef PICTUREWIDGET_H
#define PICTUREWIDGET_H

#include <QDialog>

namespace Ui {
class pictureWidget;
}

class pictureWidget : public QDialog
{
    Q_OBJECT

public:
    explicit pictureWidget(QWidget *parent = 0);
    ~pictureWidget();

private:
    Ui::pictureWidget *ui;
};

#endif // PICTUREWIDGET_H
