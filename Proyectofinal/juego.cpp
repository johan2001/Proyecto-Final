#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Juego)
{
    ui->setupUi(this);

    startTimer(2000/60);

    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,1200,600);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setBackgroundBrush(QImage("").scaled(1200,600)); //Intoducir fondo

    for (int i=0;i<15;i++) {
        for (int j=0;j<38;j++) {
        }
    }

}
Juego::~Juego()
{
   delete ui;
}

void Juego::keyPressEvent(QKeyEvent *event)
    {
    keys[event->key()]=true; QWidget::keyPressEvent(event);
    }


void Juego::keyReleaseEvent(QKeyEvent *event)
    {
    keys[event->key()]=false; QWidget::keyReleaseEvent(event);
    }


void Juego::timerEvent(QTimerEvent *)
{

}
void Juego::colisiones()
{

}


