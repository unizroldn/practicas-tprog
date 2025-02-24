#pragma once
#include "instruccion.h"
/**
 * Clase base Programa
 * Representa un conjunto de instrucciones que pueden ejecutarse.
 */
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
/**
 * Programa que suma dos números.
 */
class Suma : public Programa{
    public:
        Suma();
        // virtual ~Suma();
};
/**
 * Programa que cuenta hacia atrás desde un número dado.
 */
class CuentaAtras : public Programa{
    public:
        CuentaAtras();
        // virtual ~Suma();
};
/**
 * Programa que calcula el factorial de un número dado.
 */
class Factorial : public Programa{
    public:
        Factorial();
        // virtual ~Suma();
};