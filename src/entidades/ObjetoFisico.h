#pragma once

class ObjetoFisico
{
    public:

    int GetCoordenadaX();
    void SetCoordenadaX(int coordenadaX);
    int GetCoordenadaY();
    void SetCoordenadaY(int coordenadaY);
    ///int GetAltura();
    ///void SetAltura(int altura);
    int GetAncho();
    void SetAncho(int ancho);

    private:
    
    int _coordenadaX;
    int _coordenadaY;
    int _altura;
    int _ancho;
};
