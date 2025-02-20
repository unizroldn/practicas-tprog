public class Main {
    public static void main(String[] args) {

        Suma suma = new Suma();
        suma.listar();
        suma.ejecutar();

        CuentaAtras cont = new CuentaAtras();
        cont.listar();
        cont.ejecutar();

        Factorial fact = new Factorial();
        fact.listar();
        fact.ejecutar();
    }
}
