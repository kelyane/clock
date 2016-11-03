#include "clock.h"
#include "ui_clock.h"

Clock::Clock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Clock)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush redBrush(Qt::red);
    QPen blackPen(Qt::black);
    QPen bluePen(Qt::blue);
    QPen greenPen(Qt::green);

    blackPen.setWidth(3);
    bluePen.setWidth(3);
    greenPen.setWidth(3);

    ellipse = scene->addEllipse(0,0,100,100,blackPen,redBrush);
    hourPointer = scene->addLine(50,50,100,50,blackPen);
    minutePointer = scene->addLine(50,50,50,100,bluePen);
    secondPointer = scene->addLine(50,50,50,0,greenPen);

}

Clock::~Clock()
{
    delete ui;
}
