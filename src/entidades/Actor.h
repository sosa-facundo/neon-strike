#pragma once

#include <iostream>
#include <chrono>
#include <thread>

#include "ObjetoFisico.h"

class Actor : public ObjetoFisico
{
    public:

    void Caminar();
    
    private:
    
    int _vida;
};