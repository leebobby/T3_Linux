#ifndef ADAS_H
#define ADAS_H

#include <QDialog>

namespace Ui {
class ADAS;
}

class ADAS : public QDialog
{
    Q_OBJECT

public:
    explicit ADAS(QWidget *parent = 0);
    ~ADAS();

private:
    Ui::ADAS *ui;
};

#endif // ADAS_H
