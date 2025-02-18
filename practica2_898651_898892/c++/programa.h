#pragma once
#include "instruccion.h"

class Programa{
    protected:
        Instruccion** instrucciones;
        int num_intrucciones;
    public:
        Programa();
        virtual ~Programa();

        void ejecutar();
        void listar();
};

class Suma : public Programa{
    public:
        Suma();
        // virtual ~Suma();
};

class CuentaAtras : public Programa{
    public:
        CuentaAtras();
        // virtual ~Suma();
};

class Factorial : public Programa{
    public:
        Factorial();
        // virtual ~Suma();
};