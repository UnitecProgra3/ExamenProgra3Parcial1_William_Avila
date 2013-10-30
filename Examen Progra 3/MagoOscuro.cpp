#include "MagoOscuro.h"

MagoOscuro::MagoOscuro(int hp,int puntos_de_ataque)
{
    //ctor
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->super_rayo_activado=false;
}

MagoOscuro::~MagoOscuro()
{
    //dtor
}
void MagoOscuro ::activarPoder()
 {

     this->super_rayo_activado=true;
 }

void MagoOscuro ::atacar(Personaje* objetivo)
 {

     if(super_rayo_activado)
        objetivo->recibir_ataque(puntos_de_ataque*=2);
     else
        objetivo->recibir_ataque(puntos_de_ataque);
 }

void MagoOscuro::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque:  "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<"Mago Oscuro"<<endl;

}
