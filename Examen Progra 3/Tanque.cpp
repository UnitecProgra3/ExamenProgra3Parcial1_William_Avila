#include "Tanque.h"

Tanque::Tanque(int hp,int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->escudo_activado=false;


    //ctor
}

Tanque::~Tanque()
{
    //dtor
}

void Tanque::activarPoder()
{

    this->escudo_activado=true;

}
void Tanque ::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque:  "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<"Tanque"<<endl;
    cout<<"Escudo : "<<escudo_activado<<endl;
}

void Tanque ::recibir_ataque(int ataque)
{
    if(escudo_activado)
        this->hp-=ataque/2;
    else
        this->hp-=ataque;
}
