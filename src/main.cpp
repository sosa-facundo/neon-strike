#include <iostream>
using namespace std;

#include "entidades/Personaje.h"
#include "entidades/PisoPinchudo.h"

int main()
{
    Personaje mario;
    PisoPinchudo pinchos;

    mario.SetCoordenadaX(100);
    pinchos.SetCoordenadaX(400);
    pinchos.SetAncho(40);

    while (true)
    {
        mario.Caminar();

        if (mario.GetCoordenadaX() >= pinchos.GetCoordenadaX() &&
        mario.GetCoordenadaX() <= pinchos.GetCoordenadaX() + pinchos.GetAncho())
        {
            cout << "¡Perdiste, te pinchaste!\n";
            return 0;
        }
    }
}