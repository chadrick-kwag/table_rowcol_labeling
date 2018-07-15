#ifndef IMAGELABEL_H
#define IMAGELABEL_H

#include <QtWidgets>
#include <QLabel>
#include <QPointF>


class imagelabel : public QLabel
{


public:
    explicit imagelabel(QWidget* parent=nullptr);
    void paintEvent(QPaintEvent *);
    ~imagelabel();
    QPixmap saved_pixmap;

private:
    QPointF startpoint, endpoint;
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);

};

#endif // IMAGELABEL_H
