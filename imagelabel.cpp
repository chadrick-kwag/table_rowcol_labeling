#include "imagelabel.h"

imagelabel::imagelabel(QWidget *parent):
    QLabel(parent)
{
    startpoint.setX(0.0);
    startpoint.setY(0.0);

    endpoint.setX(0.0);
    endpoint.setY(0.0);

    setScaledContents(true);

}

imagelabel::~imagelabel(){

}

void imagelabel::mousePressEvent(QMouseEvent *ev) {
    startpoint = ev->pos();

}


void imagelabel::mouseReleaseEvent(QMouseEvent *ev){
    endpoint = ev->pos();
    update();

}

void imagelabel::paintEvent(QPaintEvent *ev){

    this->setPixmap(saved_pixmap);
//    if(startpoint.isNull() or endpoint.isNull()){
//        return;
//    }

//    QPainter painter(this);
//    QPen pen;
//    pen.setColor(Qt::black);
//    pen.setWidth(5);
//    pen.setStyle(Qt::SolidLine);
//    painter.setPen(pen);

//    painter.drawLine(startpoint, endpoint);
}

