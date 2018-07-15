#include "test.h"
#include "ui_test.h"

test::test(QWidget *parent) :
    QWidget(parent)
{


    setMouseTracking(true);

    imageLabel = new NewTypeLabel1(parent);




    imageLabel->setBackgroundRole(QPalette::Base);
    imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

//    imageLabel->setScaledContents(true);


    QGridLayout layout(this);

    layout.addWidget(imageLabel);


    open();
}

test::~test()
{

}

void test::open(){
    QFileDialog dialog(this, tr("Open File"));
    QStringList fileNames;
    QStringList mimetypefilters;
    mimetypefilters << "image/jpeg" << "image/png" << "image/gif";
    dialog.setMimeTypeFilters(mimetypefilters);
    QString defaultdirpath = "/home/chadrick/test/imageoutput_180714";
    dialog.setDirectory(defaultdirpath);

    if(dialog.exec()){
        fileNames = dialog.selectedFiles();
    }

    qDebug() << "fetched filenames = " << fileNames;

    QString firstfile = fileNames.first();
    if(firstfile==NULL){
        return;
    }

    QImageReader reader(firstfile);
    QImage readimage = reader.read();
    if(readimage.isNull()){
        return;
    }

    imageLabel->setPixmap(QPixmap::fromImage(readimage));
//    imageLabel->saved_pixmap = QPixmap::fromImage(readimage);


    if(imageLabel->pixmap()!=0){
        qDebug() << "imageLabel pixmap not null";
    }
    else{
        qDebug() << "imageLabel pixmap is null";
    }

}








