#include <stack>
#include <string>

using namespace std;

// Clase base para todas las instrucciones
class Instruccion {
    public:
    
        virtual ~Instruccion();
        virtual void ejecutar(stack<int>& s, int& pc) = 0;
        virtual string listar() = 0;
};


// Instrucción para leer un valor y apilarlo
class Read : public Instruccion {
public:
    void ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

// Instrucción para escribir el valor superior de la pila
class Write : public Instruccion {
public:
    void ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

// Instrucción para sumar los dos valores superiores de la pila
class Add : public Instruccion {
public:
    void ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

// Instrucción para apilar un valor constante
class Push : public Instruccion {
    private:
        int constante;
    public:
        Push(int _constante);
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

// Instrucción para duplicar el valor superior de la pila
class Dup : public Instruccion {
    public:
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

// Instrucción para saltar si el valor superior de la pila es no negativo
class Jumpif : public Instruccion {
    private:
        int constante;
    public:
        Jumpif(int _constante);
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

// Instrucción para multiplicar los dos valores superiores de la pila
class Mul : public Instruccion {
    public:
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

// Instrucción para intercambiar los dos valores superiores de la pila
class Swap : public Instruccion {
    public:
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

// Instrucción para copiar el segundo valor de la pila y apilarlo
class Over : public Instruccion {
    public:
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};