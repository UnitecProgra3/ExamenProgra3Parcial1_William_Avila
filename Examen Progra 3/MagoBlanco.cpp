#include "MagoBlanco.h"

MagoBlanco::MagoBlanco(int hp, int puntos_de_ataque)
{
     this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    //ctor
}

MagoBlanco::~MagoBlanco()
{
    //dtor
}

void MagoBlanco::activarPoder()
{
    this->hp*=2;
    this->puntos_de_ataque/=2;

}

void MagoBlanco::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque:  "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<"Mago Blanco"<<endl;

}
