#include <stack>
#include <string>

using namespace std;

class Instruccion {
    public:
    
        // ¿?
        virtual ~Instruccion();
        virtual void ejecutar(stack<int>& s, int& pc) = 0;
        virtual string listar() = 0;
};


class Read : public Instruccion {
public:
    void ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

class Write : public Instruccion {
public:
    void ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

class Add : public Instruccion {
public:
    void ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

class Push : public Instruccion {
    private:
        int constante;
    public:
        Push(int _constante);
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Dup : public Instruccion {
    public:
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Jumpif : public Instruccion {
    private:
        int constante;
    public:
        Jumpif(int _constante);
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Mul : public Instruccion {
    public:
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Swap : public Instruccion {
    public:
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Over : public Instruccion {
    public:
        void ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};