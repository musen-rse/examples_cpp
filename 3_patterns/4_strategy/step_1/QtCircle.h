#ifndef __QTCIRCLE_H__
#define __QTCIRCLE_H__

#include "Circle.h"

#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QRectF>
#include <QPainter>
#include <QLabel>
#include <QImage>
#include <QPen>
#include <QPicture>


class QtCircle : public Circle {
public:
    QtCircle(int r, int x, int y) : Circle(r,x,y) {}

    virtual void draw() {
        int argc = 0;

        QApplication qapp(argc, NULL);

        QWidget window;
        window.resize(400, 400);
        window.show();
        window.setWindowState(Qt::WindowState::WindowActive);
        window.raise();
        window.setWindowTitle("QtCircle");

        QPixmap image(500, 500);
        image.fill();
        QPainter painter(&image);

        QPen pen;
        pen.setWidth(5);
        pen.setColor(Qt::red);
        painter.setPen(pen);

        QRectF rectangle(50.0, 50.0, 300.0, 300.0);
        painter.drawEllipse(rectangle);

        QLabel myLabel(&window);
        myLabel.setPixmap(image);

        myLabel.show();
        qapp.exec();
    }

};

#endif // __QTCIRCLE_H__