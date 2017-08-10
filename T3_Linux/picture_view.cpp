#include "picture_view.h"
#include "ui_picture_view.h"
// This is available in all editors.
extern int which_pic_show_big;
extern QString which_filename_show_big;

Picture_view::Picture_view(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Picture_view),number_to_show(which_pic_show_big)
{
    ui->setupUi(this);
    pictureLabel = new QLabel(this);
    scrollArea=new QScrollArea(this);
    qDebug()<<"需要打开第"<<number_to_show<<"张图片";
    qDebug()<<which_pic_show_big;
    qDebug()<<"打开的文件名称为"<<which_filename_show_big;
    QDirIterator m_DirIterator(QString("E:/tech_practise/T3_linux/T3_Linux/T3_Linux/image"),QDir::Files|QDir::NoSymLinks,QDirIterator::Subdirectories);
//    qDebug()<<" 当前目录为："<<m_DirIterator.path();
//    int count=0;
    while (m_DirIterator.hasNext()) {
        QString tempFile=m_DirIterator.next();
        QString tempFileName=tempFile;
        tempFileName=tempFileName.remove(QString("E:/tech_practise/T3_linux/T3_Linux/T3_Linux/image/"),Qt::CaseSensitive);

        if(which_filename_show_big==tempFileName){
            qDebug()<<"打开图片ing";
            QPixmap objPixmap(tempFile);
            pictureLabel->setPixmap(objPixmap);
            pictureLabel->resize(QSize(objPixmap.width(),objPixmap.height()));
            break;
        }
        else{
            qDebug()<<"不是这张，下一张";
//            count++;
        }
    }
    //去掉scroll的边框
    scrollArea->setWidget(pictureLabel);
    scrollArea->setFrameShape(QFrame::NoFrame);
    pictureLabel->setAlignment(Qt::AlignCenter);  // 图片居中
    scrollArea->setBackgroundRole(QPalette::Dark);
    scrollArea->setWidgetResizable(true);  // 自动调整大小
    scrollArea->setFixedSize(180,180);
    pictureLabel->setAlignment(Qt::AlignCenter);
    scrollArea->setAlignment(Qt::AlignCenter);  // 居中对齐


}

Picture_view::~Picture_view()
{
    delete ui;
}
//void Picture_view::which_item_clicked(QModelIndex item)
//{

//}

void Picture_view::on_closeButton_clicked()
{
    this->close();
}
