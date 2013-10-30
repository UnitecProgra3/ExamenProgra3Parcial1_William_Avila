#include "Enemigo.h"

Enemigo::Enemigo(Jugador *jugador)
{
    this->jugador=jugador;
    //ctor
}

Enemigo::~Enemigo()
{
    //dtor
}

void Enemigo::atacar()
{

    jugador->hp-=10;
}
