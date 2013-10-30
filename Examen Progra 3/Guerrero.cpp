#include "Guerrero.h"

Guerrero::Guerrero(int hp,int puntos_de_ataque)
{

    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    //ctor
}

Guerrero::~Guerrero()
{
    //dtor
}

void Guerrero::activarPoder()
{
    this->hp/=2;
    this->puntos_de_ataque*=2;

}

void Guerrero::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque:  "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<"Guerrero"<<endl;

}
