#ifndef TIMESETTING_H
#define TIMESETTING_H

#include <QDialog>
#include <QObject>
#include <QDate>
#include <QTime>
namespace Ui {
class TimeSetting;
}
//设定主屏幕时间
//class results{
//public:
//    QDate date_sets;
//    QTime time_sets;
//    QString testString;
//};
class TimeSetting : public QDialog
{
    Q_OBJECT

public:
    friend class results;
    explicit TimeSetting(QWidget *parent = 0);
    ~TimeSetting();

private:
    Ui::TimeSetting *ui;
//    void accept();//回传数据到主界面
public slots:
    void setDatesTimes();
//signals:
//    void send_data_to_main(results);
};

#endif // TIMESETTING_H
