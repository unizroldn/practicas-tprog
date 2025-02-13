#pragma once

#include "instruccion.h"

class Programa{
    protected:
        Instruccion** instrucciones;
        int pc;
    public:
        Programa();
        virtual ~Programa();

        void ejecutar();
        void listar();
};

class Suma : public Programa{
    public:
        Suma();
}