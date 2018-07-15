#ifndef TEST_H
#define TEST_H

#include <QtWidgets>
#include <QLabel>
#include <QFileDialog>
#include <QDebug>
#include <QImageReader>
#include <QGridLayout>
#include <QMouseEvent>

//#include "imagelabel.h"
#include "newtypelabel1.h"



class test : public QWidget
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = 0);
    ~test();



private:


    NewTypeLabel1 *imageLabel;
    QImage image;
    bool loadimage();
    void open();
    bool mousepressed;
    QPointF startpoint, endpoint;





};

#endif // TEST_H
