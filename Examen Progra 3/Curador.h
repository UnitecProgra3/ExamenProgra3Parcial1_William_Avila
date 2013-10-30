#ifndef CURADOR_H
#define CURADOR_H

#include "Personaje.h"

#include<iostream>
#include <string>

using namespace std;

class Curador : public Personaje
{
    public:
        int puntos_de_curacion;
        Curador();
        Curador(int hp,int puntos_de_ataque, int puntos_de_curacion);
        void activarPoder();
        void imprimir();
        virtual ~Curador();
    protected:
    private:
};

#endif // CURADOR_H
