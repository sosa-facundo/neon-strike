#include <iostream>
using namespace std;

#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    bool tieneEstrellita = 0;
    int alturaPersonaje = 30;
    int anchoPersonaje = 10;
    int coordenadaActualX = 100;
    int coordenadaActualY = 600;
    int alturaPinchos = 5;
    int anchoPinchos = 40;
    int coordenadaPinchosX = 400;
    int coordenadaPinchosY = 600;

    while (true)
    {
        // Simular caminata hacia la derecha

        coordenadaActualX += 10;
        cout << "Tu personaje se movió a la derecha...\n";

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        // Verificar si toca los pinchos

        if (coordenadaActualX >= coordenadaPinchosX &&
        coordenadaActualX <= coordenadaPinchosX + anchoPinchos)
        {
            cout << "¡Perdiste, te pinchaste!\n";
            return 0;
        }
    }
}