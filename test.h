#ifndef TEST_H
#define TEST_H

#include <QtWidgets>
#include <QLabel>
#include <QFileDialog>
#include <QDebug>
#include <QImageReader>
#include <QGridLayout>
#include <QMouseEvent>

#include "imagelabel.h"


class QLabel;

//namespace Ui {
//class test;
//}

class test : public QWidget
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = 0);
    ~test();



private:


    imagelabel *imageLabel;
    QImage image;
    bool loadimage();
    void open();
    bool mousepressed;
    QPointF startpoint, endpoint;




};

#endif // TEST_H
