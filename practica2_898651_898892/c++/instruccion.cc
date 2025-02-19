#include "instruccion.h"
#include <iostream>
using namespace std;


Instruccion::~Instruccion()
{}


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
    return "write\n";
}

Push::Push(int _constante) 
    : constante(_constante) 
{}

bool Push::ejecutar(stack<int>& pila, int& pc){
    
    pila.push(constante);
    pc++;

    return true;
}


string Push::listar(){
    return "Push " + to_string(constante) + " \n";
}


bool Dup::ejecutar(stack<int>& pila, int& pc){
    if(pila.empty()){
        return false;
    }
    // desapila dos veces ¿?
    int valor = pila.top();
    pila.push(valor);
    
    pc++;

    return true;    
}

string Dup::listar(){
    return "dup\n";
}


Jumpif::Jumpif(int _constante) 
    : constante(_constante) 
{}


bool Jumpif::ejecutar(stack<int>& pila, int& pc){
    if(pila.empty()){
        return false;
    }
    int cima = pila.top();
    pila.pop();
    if (cima>=0){
        pc=constante;
    }else{
        pc++;
    }

    return true;
}


string Jumpif::listar(){
    return "Jumpif " + to_string(constante) + " \n";
}

bool Mul::ejecutar(stack<int>& pila, int& pc){
    if(pila.size() < 2){
        return false;
    }
    // Hay dos elementos en la pila --> multiplicarlos
    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();
    // Apilamos el resultado de la multiplicación
    pila.push(r1*r2);
    pc++;

    return true;
}

string Mul::listar(){
    return "mul\n";
}


bool Swap::ejecutar(stack<int>& pila, int& pc){
    if(pila.size() < 2){
        return false;
    }

    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();

    pila.push(r1);
    pila.push(r2);

    pc++;
    
    return true;
    
}

string Swap::listar(){
    return "swap\n";
}



bool Over::ejecutar(stack<int>& pila, int& pc){
    if(pila.size() < 2){
        return false;
    }
    // Hay dos elementos en la pila --> multiplicarlos
    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    
    pila.push(r1);
    pila.push(r2);
    pc++;

    return true;
}

string Over::listar(){
    return "over\n";
}