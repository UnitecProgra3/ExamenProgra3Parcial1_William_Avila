#ifndef PERSONAJE_H
#define PERSONAJE_H
#include<iostream>
#include <string>

using namespace std;

class Personaje
{
    public:
        Personaje();
        Personaje(int hp,int puntos_de_ataque,string tipo);
        int hp;
        int puntos_de_ataque;
        string tipo;
        virtual void activarPoder()=0;
        virtual void imprimir()=0;
        virtual void recibir_ataque(int ataque);
        virtual void atacar(Personaje* objetivo);


        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
