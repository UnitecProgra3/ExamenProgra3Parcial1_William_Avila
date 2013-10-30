#ifndef MAGOOSCURO_H
#define MAGOOSCURO_H
#include "Personaje.h"
#include<iostream>
#include <string>

class MagoOscuro : public Personaje
{
    public:
        MagoOscuro(int hp,int puntos_de_ataque);
        void activarPoder();
        void imprimir();
        bool super_rayo_activado;
        void atacar(Personaje* objetivo);
        virtual ~MagoOscuro();
    protected:
    private:
};

#endif // MAGOOSCURO_H
