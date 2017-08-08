#ifndef REVERSELINE_H
#define REVERSELINE_H

#include <QDialog>

namespace Ui {
class ReverseLine;
}

class ReverseLine : public QDialog
{
    Q_OBJECT

public:
    explicit ReverseLine(QWidget *parent = 0);
    ~ReverseLine();

private:
    Ui::ReverseLine *ui;
};

#endif // REVERSELINE_H
