#include "Curador.h"

Curador::Curador()
{
    //ctor
}

Curador::Curador(int hp,int puntos_de_ataque, int puntos_de_curacion)
{

    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->puntos_de_curacion=puntos_de_curacion;
}

Curador::~Curador()
{
    //dtor
}

void Curador::imprimir()
{

    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque:  "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<"Curador"<<endl;
    cout<<"Puntos de Curacion: "<<puntos_de_curacion<<endl;
}

void Curador::activarPoder()
{
    this->hp+=puntos_de_curacion;
}

