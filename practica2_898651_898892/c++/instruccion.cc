#include "instruccion.h"
#include <iostream>
using namespace std;


Instruccion::~Instruccion()
{}


void Add::ejecutar(stack<int>& pila, int& pc){
    // Hay dos elementos en la pila --> sumarlos
    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();

    // Apilamos el resultado de la suma
    pila.push(r1+r2);
    pc++;

}

string Add::listar(){
    return "add\n";
}

void Read::ejecutar(stack<int>& pila, int& pc){
    cout << "? ";
    int r1;
    cin >> r1;
    pila.push(r1);
    pc++;

}

string Read::listar(){
    return "read\n";
}

void Write::ejecutar(stack<int>& pila, int& pc){
   
    int r1 = pila.top();
    pila.pop();
    cout << r1 << endl;
    pc++;


}

string Write::listar(){
    return "write\n";
}

Push::Push(int _constante) 
    : constante(_constante) 
{}

void Push::ejecutar(stack<int>& pila, int& pc){
    
    pila.push(constante);
    pc++;

}


string Push::listar(){
    return "push " + to_string(constante) + " \n";
}


void Dup::ejecutar(stack<int>& pila, int& pc){

    int valor = pila.top();
    pila.push(valor);
    
    pc++;

}

string Dup::listar(){
    return "dup\n";
}


Jumpif::Jumpif(int _constante) 
    : constante(_constante) 
{}


void Jumpif::ejecutar(stack<int>& pila, int& pc){
    int cima = pila.top();
    pila.pop();
    if (cima>=0){
        pc=constante;
    }else{
        pc++;
    }
}


string Jumpif::listar(){
    return "Jumpif " + to_string(constante) + " \n";
}

void Mul::ejecutar(stack<int>& pila, int& pc){
    // Hay dos elementos en la pila --> multiplicarlos
    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();
    // Apilamos el resultado de la multiplicación
    pila.push(r1*r2);
    pc++;

}

string Mul::listar(){
    return "mul\n";
}


void Swap::ejecutar(stack<int>& pila, int& pc){

    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();

    pila.push(r1);
    pila.push(r2);

    pc++;
    
}

string Swap::listar(){
    return "swap\n";
}



void Over::ejecutar(stack<int>& pila, int& pc){

    // Hay dos elementos en la pila --> multiplicarlos
    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    
    pila.push(r1);
    pila.push(r2);
    pc++;

}

string Over::listar(){
    return "over\n";
}