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