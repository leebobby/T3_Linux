#include "videowidget.h"
#include "ui_videowidget.h"

videoWidget::videoWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::videoWidget)
{
    ui->setupUi(this);
//    ui->listWidget_file=new QListWidget(this);

    ui->listWidget_file->setObjectName(QString::fromUtf8("listWidget_file"));
    ui->listWidget_file->setGeometry(QRect(0,0,0,0));
    QDirIterator m_DirIterator(QString("E:/tech_practise/T3_linux/T3_Linux/T3_Linux/image"),QDir::Files|QDir::NoSymLinks,QDirIterator::Subdirectories);
    qDebug()<<" 当前目录为："<<m_DirIterator.path();
    qDebug()<<"当前文件信息为："<<m_DirIterator.fileName();
    ui->listWidget_file->clear();
    while (m_DirIterator.hasNext()) {
        QString tempFile=m_DirIterator.next();
        ui->listWidget_file->setIconSize(QSize(100,100));
        ui->listWidget_file->setResizeMode(QListView::Adjust);
        ui->listWidget_file->setViewMode(QListView::IconMode);
        ui->listWidget_file->setMovement(QListView::Static);
        //选择模式有:ExtendedSelection 按住ctrl多选,
        //SingleSelection 单选 MultiSelection 点击多选,
        //ContiguousSelection 鼠标拖拉多选
        ui->listWidget_file->setSelectionMode(QAbstractItemView::ExtendedSelection);
        //设置自动排序
        ui->listWidget_file->setSortingEnabled(true);
        //设置拖拉
        ui->listWidget_file->setDragEnabled(true);
        //设置全选
        //ui->listWidget_file->selectAll();
        ui->listWidget_file->setSpacing(12);
        QPixmap objPixmap(tempFile);
        tempFile=tempFile.remove(QString("E:/tech_practise/T3_linux/T3_Linux/T3_Linux/image/"),Qt::CaseSensitive);
        QListWidgetItem *pItem = new QListWidgetItem(QIcon(objPixmap.scaled(QSize(70,50))),tempFile);
        pItem->setSizeHint(QSize(70,70));            //设置单元项的宽度和高度

        ui->listWidget_file->addItem(pItem);              //添加QListWidgetItem项

    }
    ui->listWidget_file->setGeometry(NULL,NULL,455,209);
}

videoWidget::~videoWidget()
{
    delete ui;
}
