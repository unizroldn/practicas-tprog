#include "programa.h"
#include <iostream>
using namespace std;

// Constructor de la clase Programa
// pre: ---
// post: inicializa el programa sin instrucciones
Programa::Programa()
    :   instrucciones(nullptr), num_intrucciones(0)
{}

// Destructor de la clase Programa
// pre: ---
// post: libera la memoria ocupada por las instrucciones
Programa::~Programa()
{
    for(int i = 0; i < num_intrucciones; i++){
        delete instrucciones[i];
    }
    delete[] instrucciones;
}

// Ejecuta el programa
// pre: ---
// post: ejecuta todas las instrucciones en orden hasta finalizar
void Programa::ejecutar(){
    int pc = 0;
    stack<int> pila;
    bool resultado = true;
    cout << "Ejecutar: " << endl;
    while(pc < num_intrucciones && resultado){
        // ejecutar instruccion
        instrucciones[pc]->ejecutar(pila, pc);
    }
}

// Lista las instrucciones del programa
// pre: ---
// post: imprime en pantalla la lista de instrucciones con su indice
void Programa::listar(){
    int pc = 0;
    cout << "Programa: " << endl;
    while(pc < num_intrucciones){
        // listar instruccion
        cout << pc << " " << instrucciones[pc]->listar();
        pc++;
    }
    cout << endl;
}

// Constructor de la clase Suma
// pre: ---
// post: inicializa el programa con 4 instrucciones para sumar dos numeros
Suma::Suma(){
    num_intrucciones = 4;
    instrucciones = new Instruccion*[num_intrucciones];

    instrucciones[0] = new Read();
    instrucciones[1] = new Read();
    instrucciones[2] = new Add();
    instrucciones[3] = new Write();
}

// Constructor de la clase CuentaAtras
// pre: ---
// post: inicializa el programa con 7 instrucciones para contar hacia atras
CuentaAtras::CuentaAtras(){
    num_intrucciones = 7;
    instrucciones = new Instruccion*[num_intrucciones];

    instrucciones[0] = new Read();
    instrucciones[1] = new Dup();
    instrucciones[2] = new Write();
    instrucciones[3] = new Push(-1);
    instrucciones[4] = new Add();
    instrucciones[5] = new Dup();
    instrucciones[6] = new Jumpif(1);
}

// Constructor de la clase Factorial
// pre: ---
// post: inicializa el programa con 14 instrucciones para calcular el factorial de un numero
Factorial::Factorial(){
    num_intrucciones = 14;
    instrucciones = new Instruccion*[num_intrucciones];

    instrucciones[0] = new Push(1);
    instrucciones[1] = new Read();
    instrucciones[2] = new Swap();
    instrucciones[3] = new Over();
    instrucciones[4] = new Mul();
    instrucciones[5] = new Swap();
    instrucciones[6] = new Push(-1);
    instrucciones[7] = new Add();
    instrucciones[8] = new Dup();
    instrucciones[9] = new Push(-2);
    instrucciones[10] = new Add();
    instrucciones[11] = new Jumpif(2);
    instrucciones[12] = new Swap();
    instrucciones[13] = new Write();
}
