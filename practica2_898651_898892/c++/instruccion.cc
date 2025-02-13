#include "instruccion.h"
#include <iostream>
using namespace std;



bool Add::ejecutar(stack<int>& pila, int& pc){
    if(pila.size() < 2){
        return false;
    }
    // Hay dos elementos en la pila --> sumarlos
    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();

    // Apilamos el resultado de la suma
    pila.push(r1+r2);
    pc++;

    return true;
}

string Add::listar(){
    return "add\n";
}

bool Read::ejecutar(stack<int>& pila, int& pc){
    cout << "? ";
    int r1;
    cin >> r1;
    pila.push(r1);
    pc++;

    return true; // ¿?
}

string Read::listar(){
    return "read\n";
}

bool Write::ejecutar(stack<int>& pila, int& pc){
    if(pila.empty()){
        return false;
    }
    
    int r1 = pila.top();
    pila.pop();
    cout << r1 << endl;
    pc++;

    return true;
}

string Write::listar(){
    return "read\n";
}