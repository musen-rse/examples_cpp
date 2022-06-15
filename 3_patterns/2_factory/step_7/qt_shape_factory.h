#ifndef ADVANCED_SHAPE_FACTORY_H
#define ADVANCED_SHAPE_FACTORY_H

#include "core/shape_factory.h"

#include <functional>

#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QRectF>
#include <QPainter>
#include <QLabel>
#include <QImage>
#include <QPen>
#include <QPicture>


using DrawShapeFunctor = std::function<void(QPainter&, const QRectF&)>;

void drawEllipse(QPainter& painter, const QRectF& rectangle) {
    painter.drawEllipse(rectangle);
}

void drawRect(QPainter& painter, const QRectF& rectangle) {
    painter.drawRect(rectangle);
}

void drawTriangle(QPainter& painter, const QRectF& rectangle) {
    qreal x, y, width, height;
    rectangle.getRect(&x, &y, &width, &height);

    painter.drawLine(x, y, x, y + height);
    painter.drawLine(x, y, x + width, y);
    painter.drawLine(x, y + height, x + width, y);
}

void drawShape(QString name, DrawShapeFunctor drawShape)
{
    int argc = 0;
    QApplication qapp (argc, NULL);
    QWidget window;
    window.resize(400, 400);
    window.show();
    window.setWindowState(Qt::WindowState::WindowActive);
    window.raise();
    window.setWindowTitle(name);

    QPixmap image(500, 500);
    image.fill();
    QPainter painter(&image);

    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::red);
    painter.setPen(pen);

    QRectF rectangle(50.0, 50.0, 300.0, 300.0);
    drawShape(painter, rectangle);

    QLabel myLabel(&window);
    myLabel.setPixmap(image);

    myLabel.show();
    qapp.exec();
}

class QtCircle : public Shape {

    public:
    void draw() override {
        drawShape("Circle", drawEllipse);
    }
};

class QtSquare : public Shape {
public:
    void draw() override {
        drawShape("Square", drawRect);
    }
};

class QtTriangle : public Shape {

    public:
    void draw() override {
        drawShape("Triangle", drawTriangle);
    }
};


class QtShapeFactory : public ShapeFactory {
public:
    Shape* create(std::string type) {
         if (type == "QtSquare") {
            return new QtSquare();
        } else if (type == "QtCircle") {
            return new QtCircle();
        } else if (type == "QtTriangle") {
            return new QtTriangle();
        }

        return nullptr;
    }

    virtual std::vector<std::string> getShapeTypes() {
        return {"QtSquare", "QtCircle", "QtTriangle"};
    }


};


#endif
