#ifndef NEWTYPELABEL1_H
#define NEWTYPELABEL1_H

#include <QLabel>
#include <QDebug>
#include <QMouseEvent>
#include <QPen>
#include <QPainter>

class NewTypeLabel1 : public QLabel
{
public:
    NewTypeLabel1(QWidget* parent);


    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void paintEvent(QPaintEvent *ev);
    void setPixmap(const QPixmap &);


private:
    QPointF startpoint , endpoint;
    void nullifyPoint(QPointF* point);
    QPainter painter;
    QPixmap basepicture;

};

#endif // NEWTYPELABEL1_H
