#ifndef TEST_H
#define TEST_H

#include <QWidget>
#include <QLabel>
#include <QFileDialog>
#include <QDebug>
#include <QImageReader>
#include <QGridLayout>

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
//    Ui::test *ui;
    QLabel *imageLabel;
    QImage image;
    bool loadimage();
    void open();
};

#endif // TEST_H
