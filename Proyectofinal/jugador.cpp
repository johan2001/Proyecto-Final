#include "jugador.h"

Jugador::Jugador(int x, int y , QObject *parent): QObject(parent)
{
    pixmap=new QPixmap(":/Personaje/Personaje_1.jpg");
    EstadoPosicionBase=true;
    falling=false;
    direction="derecha";
    Pos_X=x;
    Pos_Y=y;
    Pos_X_Base=x;
    Pos_Y_Base=y;
    Ancho=45;
    Alto=65;
    velX=20;
    velY=-40;
    velCaida=0;

    // conecta el timepo con el salto y con la caida libre
    timerSalto=new QTimer;
    connect(timerSalto,SIGNAL(timeout()),this,SLOT(salto()));
    timerCaida=new QTimer;
    connect(timerCaida,SIGNAL(timeout()),this,SLOT(caidaLibre()));

    setPos(Pos_X,Pos_Y);
}

QRectF Jugador::boundingRect() const
{
    return QRectF(0,0,Ancho,Alto); // se crea el rectangulo con su centro que son los primeros dos parametros y su ancho y alto
}

void Jugador::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(boundingRect(),*pixmap,pixmap->rect()); // Se pinta en el rectangulo usando el pixmap
    UNUSED(option);
    UNUSED(widget);
}

Jugador::Jugador()
{
    delete timerSalto;
    delete timerCaida;
}

void Jugador::Mover_De()
{

    if(Mov_De){
        direction="derecha";
        Pos_X+=10;
        setX(Pos_X);
    }
}

void Jugador::Mover_iz()
{
    if(Mov_Iz){
        direction="izquierda";
        Pos_X-=10;
        setX(Pos_X);
    }

}



void Jugador::salto()
{
    timerSalto->start(18);
    EstadoPosicionBase=false;

    if(velY>=0) {
        falling=true;
    }
    if(velY<0) {
        falling=false;
        Pos_Base=500;
    }

    velY+=G*Dt;
    Pos_Y += velY*Dt;
    setY(Pos_Y);

    if(Pos_Y>=Pos_Base){ // donde queda despues del salto

        timerSalto->stop(); // despues de que salte le digo que deje de saltar, sino queda saltando y saltando.
        Pos_Y=Pos_Base;
        EstadoPosicionBase=true;
        setY(Pos_Y);
        velY=-50;
    }
}

void Jugador::caidaLibre()
{

}
