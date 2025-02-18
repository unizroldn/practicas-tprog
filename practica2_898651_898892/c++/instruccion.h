#include <stack>
#include <string>

using namespace std;

class Instruccion {
    public:

        virtual ~Instruccion();
        virtual bool ejecutar(stack<int>& s, int& pc) = 0;
        virtual string listar() = 0;
};


class Read : public Instruccion {
public:
    bool ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

class Write : public Instruccion {
public:
    bool ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

class Add : public Instruccion {
public:
    bool ejecutar(stack<int>& pila, int& pc) override;
    string listar() override;
};

class Push : public Instruccion {
    private:
        int constante;
    public:
        Push(int _constante);
        bool ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Dup : public Instruccion {
    public:
        bool ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Jumpif : public Instruccion {
    private:
        int constante;
    public:
        Jumpif(int _constante);
        bool ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Mul : public Instruccion {
    public:
        bool ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Swap : public Instruccion {
    public:
        bool ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};

class Over : public Instruccion {
    public:
        bool ejecutar(stack<int>& pila, int& pc) override;
        string listar() override;
};