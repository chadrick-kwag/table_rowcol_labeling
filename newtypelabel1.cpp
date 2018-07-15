#include "newtypelabel1.h"



NewTypeLabel1::NewTypeLabel1(QWidget* parent=0) : QLabel(parent)
{
    painter.begin(this);

    nullifyPoint(&startpoint);
    nullifyPoint(&endpoint);
}


void NewTypeLabel1::mousePressEvent(QMouseEvent *ev){
    qDebug() << "mouse pressed" << ev->pos();
    startpoint = ev->pos();
}


void NewTypeLabel1::mouseReleaseEvent(QMouseEvent *ev){
    endpoint = ev->pos();


    update();
}


void NewTypeLabel1::nullifyPoint(QPointF *point){
    point->setX(0.0);
    point->setY(0.0);
}

void NewTypeLabel1::paintEvent(QPaintEvent *ev){
    QLabel::paintEvent(ev);

    if(!startpoint.isNull() && !endpoint.isNull()){

        if(!startpoint.isNull()){
            qDebug() << "startpoint is not null";
        }

        if(!endpoint.isNull()){
            qDebug() << "endpoint is not null";
        }

        QPainter painter(&basepicture);
        QPen pen;
        pen.setColor(Qt::black);
        pen.setWidth(5);
        pen.setStyle(Qt::SolidLine);

        QPointF startcopy;
        QPointF endcopy;
        startcopy.setX(startpoint.x());
        startcopy.setY(startpoint.y());

        endcopy.setX(endpoint.x());
        endcopy.setY(endpoint.y());

//        painter->setPen(pen);
//        painter->drawLine(startcopy, endcopy);


        painter.setPen(pen);
        painter.drawLine(startcopy, endcopy);

        QLabel::setPixmap(basepicture);

        nullifyPoint(&startpoint);
        nullifyPoint(&endpoint);

    }

}

void NewTypeLabel1::setPixmap(const QPixmap &pixmap){
    basepicture = pixmap;
    QLabel::setPixmap(basepicture);
}






