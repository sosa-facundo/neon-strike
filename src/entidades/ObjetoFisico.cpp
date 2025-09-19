#include "ObjetoFisico.h"

int ObjetoFisico::GetCoordenadaX()
{
    return _coordenadaX;
}

void ObjetoFisico::SetCoordenadaX(int coordenadaX)
{
    if (coordenadaX < 0)
    {
        _coordenadaX = 0;
    }

    _coordenadaX = coordenadaX;
}

int ObjetoFisico::GetCoordenadaY()
{
    return _coordenadaY;
}

void ObjetoFisico::SetCoordenadaY(int coordenadaY)
{
    if (coordenadaY < 0)
    {
        _coordenadaY = 0;
    }

    _coordenadaY = coordenadaY;
}


int ObjetoFisico::GetAncho()
{
    return _ancho;
}

void ObjetoFisico::SetAncho(int ancho)
{
    if (ancho < 0)
    {
        _ancho = 0;
    }
     
    _ancho = ancho;
}

