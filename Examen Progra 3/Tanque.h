#ifndef TANQUE_H
#define TANQUE_H

#include "Personaje.h"

#include<iostream>
#include <string>

class Tanque : public Personaje
{
    public:
        Tanque(int hp,int puntos_de_ataque);
        void activarPoder();
        void imprimir();
        void recibir_ataque(int ataque);
        bool escudo_activado;


        virtual ~Tanque();
    protected:
    private:
};

#endif // TANQUE_H
