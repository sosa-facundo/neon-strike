#include "Actor.h"

void Actor::Caminar()
{
    SetCoordenadaX(GetCoordenadaX() + 10);
    std::cout << "Tu personaje se movió a la derecha...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}