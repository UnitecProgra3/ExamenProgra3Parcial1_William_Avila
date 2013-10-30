#include "Personaje.h"

Personaje::Personaje()
{
    //ctor
}
Personaje::Personaje(int hp,int puntos_de_ataque,string tipo)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo = tipo;
}


Personaje::~Personaje()
{
    //dtor
}



void Personaje::recibir_ataque(int ataque)
{
    hp-=ataque;

}

void Personaje ::atacar(Personaje*objetivo)
{
    this->recibir_ataque(puntos_de_ataque);

}
