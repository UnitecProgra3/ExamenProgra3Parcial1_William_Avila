#include <iostream>
#include <vector>


using namespace std;
#include "Personaje.h"
#include "Curador.h"
#include "Tanque.h"
#include  "Guerrero.h"
#include "MagoBlanco.h"
#include "MagoOscuro.h"

vector<int> getVectorInts()
{

    vector<int>ints;
    ints.push_back(0);
    ints.push_back(1);
    ints.push_back(2);
    ints.push_back(3);
    ints.push_back(4);
    return ints;
}

int main()
{

    vector<int>ints2=getVectorInts();
    cout<<ints2[2]<<endl;

    vector<Personaje*>personajes;

    personajes.push_back(new Guerrero(120,15));
    personajes.push_back(new Curador(100,20,53));
    personajes.push_back(new Tanque(90,30));
    personajes.push_back(new MagoBlanco(80,50));
    personajes.push_back(new MagoOscuro(80,50));


    cout<<"---------Personajes---------"<<endl;
    for(int i =0;i<personajes.size();i++)
    {

            personajes[i]->imprimir();
    }
    cout<<"---------Activar Poder---------"<<endl;
     for(int i =0;i<personajes.size();i++)
    {

            personajes[i]->activarPoder();
            personajes[i]->imprimir();
    }
    cout<<"---------Recibir Ataque---------"<<endl;
     for(int i =0;i<personajes.size();i++)
    {

            personajes[i]->recibir_ataque(50);
            personajes[i]->imprimir();
    }
    cout<<"---------Atacar---------"<<endl;


    //personajes[0]->atacar(personajes[4]);
     personajes[4]->atacar(personajes[0]);

     for(int i =0;i<personajes.size();i++)
    {


            personajes[i]->imprimir();
    }




    return 0;
}
