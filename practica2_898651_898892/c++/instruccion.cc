#include "instruccion.h"
#include <iostream>
using namespace std;


Instruccion::~Instruccion()
{}

// Pre: Hay al menos dos elementos en la pila
// Post: Suma los dos elementos superiores de la pila, apila el resultado.
//       Además actualiza el valor de pc
void Add::ejecutar(stack<int>& pila, int& pc){
    // Desapilar elementos de la pila
    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();

    // Apilamos el resultado de la suma
    pila.push(r1+r2);
    pc++;

}

// Pre: ---
// Post: Devuelve la cadena "add\n"
string Add::listar(){
    return "add\n";
}

// Pre: ---
// Post: Lee un valor entero y lo apila en la pila.
//       Además actualiza el valor de pc
void Read::ejecutar(stack<int>& pila, int& pc){
    cout << "? ";
    int r1;
    cin >> r1;
    pila.push(r1);
    pc++;

}

// Pre: ---
// Post: Devuelve la cadena "read\n"
string Read::listar(){
    return "read\n";
}

// Pre: Hay al menos un elemento en la pila.
// Post: Muestra el valor superior de la pila y lo desapila.
//       Además actualiza el valor de pc.
void Write::ejecutar(stack<int>& pila, int& pc){
   
    int r1 = pila.top();
    pila.pop();
    cout << r1 << endl;
    pc++;


}
// Pre: ---
// Post: Devuelve la cadena "write\n"
string Write::listar(){
    return "write\n";
}

// Constructor de la clase Push
Push::Push(int _constante) 
    : constante(_constante) 
{}

// Pre: ---
// Post: Apila el valor constante en la pila
//       Además actualiza el valor de pc
void Push::ejecutar(stack<int>& pila, int& pc){
    
    pila.push(constante);
    pc++;

}

// Pre: ---
// Post: Devuelve la cadena "push <constante>\n"
string Push::listar(){
    return "push " + to_string(constante) + "\n";
}


// Pre: Hay al menos un elemento en la pila
// Post: Duplica el valor superior de la pila y lo apila
//       Además actualiza el valor de pc
void Dup::ejecutar(stack<int>& pila, int& pc){

    int valor = pila.top();
    pila.push(valor);
    
    pc++;

}

// Pre: ---
// Post: Devuelve la cadena "dup\n"
string Dup::listar(){
    return "dup\n";
}

// Constructor de la clase Jumpif
Jumpif::Jumpif(int _constante) 
    : constante(_constante) 
{}


// Pre: Hay al menos un elemento en la pila
// Post: Si el valor superior de la pila es no negativo, 
//       salta a la dirección constante; de lo contrario, 
//       incrementa el contador de programa
void Jumpif::ejecutar(stack<int>& pila, int& pc){
    int cima = pila.top();
    pila.pop();
    if (cima>=0){
        pc=constante;
    }else{
        pc++;
    }
}

// Pre: ---
// Post: Devuelve la cadena "jumpif <constante>\n"
string Jumpif::listar(){
    return "jumpif " + to_string(constante) + "\n";
}

// Pre: Hay al menos dos elementos en la pila
// Post: Multiplica los dos elementos superiores de la pila y apila el resultado
//       Además actualiza el valor de pc
void Mul::ejecutar(stack<int>& pila, int& pc){

    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();
    // Apilamos el resultado de la multiplicación
    pila.push(r1*r2);
    pc++;

}

// Pre: ---
// Post: Devuelve la cadena "mul\n"
string Mul::listar(){
    return "mul\n";
}


// Pre: Hay al menos dos elementos en la pila
// Post: Intercambia los dos elementos superiores de la pila
//       Además actualiza el valor de pc
void Swap::ejecutar(stack<int>& pila, int& pc){

    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    pila.pop();

    pila.push(r1);
    pila.push(r2);

    pc++;
    
}

// Pre: ---
// Post: Devuelve la cadena "swap\n"
string Swap::listar(){
    return "swap\n";
}


// Pre: Hay al menos dos elementos en la pila
// Post: Copia el segundo elemento de la pila y lo apila sobre el primero
//       Además actualiza el valor de pc
void Over::ejecutar(stack<int>& pila, int& pc){

    // Hay dos elementos en la pila --> multiplicarlos
    int r1 = pila.top();
    pila.pop();
    int r2 = pila.top();
    
    pila.push(r1);
    pila.push(r2);
    pc++;

}

// Pre: ---
// Post: Devuelve la cadena "over\n"
string Over::listar(){
    return "over\n";
}