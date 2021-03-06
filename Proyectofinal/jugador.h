#ifndef JUGADOR_H
#define JUGADOR_H

#include "librerias.h"

class Jugador : public QObject, public QGraphicsItem
{
    Q_OBJECT
private:

    int Pos_X, Pos_X_Base;
    int Pos_Y, Pos_Y_Base;
    int Pos_Base;
    int Ancho;
    int Alto;


    int velY;
    int velX;
    int velCaida;

    bool EstadoPosicionBase;
    bool falling;
    bool escalera;
    bool Mov_De =  true;
    bool Mov_Iz = true;

    QString direction;
    QPixmap *pixmap;
    QTimer *timerSalto, *timerCaida;

public:
    explicit Jugador(int x, int y, QObject *parent = nullptr);
    // pinta el objeto
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    Jugador();

    //metodes get:obtener
    //metodos set:modificar

    //metodos de movimientos
    void Mover_De();
    void Mover_iz();

signals:

public slots:
    //para que el jugador salte y caiga
    void salto();
    void caidaLibre();

};

#endif // JUGADOR_H
