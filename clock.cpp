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
    QBrush blueBrush(Qt::blue);
    QPen blackPen(Qt::black);
    blackPen.setWidth(6);

    ellipse = scene->addEllipse(0,0,100,100,blackPen,redBrush);
    hourPointer = scene->addLine(0,0,80,80,blackPen);
}

Clock::~Clock()
{
    delete ui;
}
