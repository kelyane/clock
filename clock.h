#ifndef CLOCK_H
#define CLOCK_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QtCore>
#include <QtGui>

namespace Ui {
    class Clock;
}

class Clock : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clock(QWidget *parent = 0);
    ~Clock();

private:
    Ui::Clock *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsLineItem *hourPointer;
    QGraphicsLineItem *minutePointer;
    QGraphicsLineItem *secondPointer;
};

#endif // CLOCK_H
