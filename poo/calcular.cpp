#include <iostream>

using namespace std;

class Suma
{
private:
    double sum1;
    double sum2;

public:
    Suma(double _sum1, int _sum2)
    {
        sum1 = _sum1;
        sum2 = _sum2;
    }

    void setSum1(double _sum1)
    {
        sum1 = _sum1;
    }
    void setSum2(double _sum2)
    {
        sum2 = _sum2;
    }

    // métodos extra
    double sumaTotal()
    {
        double sumaT = sum1 + sum2;
        return sumaT;
    }
};

class Resta
{
private:
    double rest1;
    double rest2;

public:
    Resta(double _rest1, int _rest2)
    {
        rest1 = _rest1;
        rest2 = _rest2;
    }

    void setRest1(double _rest1)
    {
        rest1 = _rest1;
    }
    void setRest2(double _rest2)
    {
        rest2 = _rest2;
    }

    // métodos extra
    double restaTotal()
    {
        double restaT = rest1 - rest2;
        return restaT;
    }
};

class Producto
{
private:
    double mult1;
    double mult2;

public:
    Producto(double _mult1, int _mult2)
    {
        mult1 = _mult1;
        mult2 = _mult2;
    }

    void setMult1(double _mult1)
    {
        mult1 = _mult1;
    }
    void setMult2(double _mult2)
    {
        mult2 = _mult2;
    }

    // métodos extra
    double multTotal()
    {
        double productoT = mult1 * mult2;
        return productoT;
    }
};

class Division
{
private:
    double div1;
    double div2;

public:
    Division(double _div1, int _div2)
    {
        div1 = _div1;
        div2 = _div2;
    }

    void setDiv1(double _div1)
    {
        div1 = _div1;
    }
    void setDiv2(double _div2)
    {
        div2 = _div2;
    }

    // métodos extra
    double divTotal()
    {
        double divT = div1 / div2;
        return divT;
    }
};

class Modulo
{
private:
    int mod1;
    int mod2;

public:
    Modulo(int _mod1, int _mod2)
    {
        mod1 = _mod1;
        mod2 = _mod2;
    }

    void setMod1(int _mod1)
    {
        mod1 = _mod1;
    }
    void setMod2(int _mod2)
    {
        mod2 = _mod2;
    }

    // métodos extra
    int modTotal()
    {
        int modTotal = mod1 % mod2;
        return modTotal;
    }
};

int main()
{
    int op = 0;
    // int suma1 = 0, suma2 = 0;

    do
    {
        /* code */

        cout << "\n";
        cout << "   Bienvenido a programa calcauladora, por favor seleccione una opcion : \n"
             << endl;
        cout << "       1.- Suma " << endl;
        cout << "       2.- Resta " << endl;
        cout << "       3.- Producto " << endl;
        cout << "       4.- Division " << endl;
        cout << "       5.- Modulo " << endl;
        cout << "       6.- Salir " << endl;
        cout << "\n";
        cout << "       ";
        cin >> op;

        switch (op)
        {
        case 1:
        {
            int suma1 = 0, suma2 = 0;

            cout << "\n";
            cout << "       Operacion Suma \n \n";
            cout << "       por favor ingrese primer valor : ";
            cin >> suma1;
            cout << "       por favor ingrese segundo valor : ";
            cin >> suma2;

            Suma testSuma = Suma(suma1, suma2);

            cout << "\n";
            cout << "       Resultado de " << suma1 << " + " << suma2 << " = ";
            cout << testSuma.sumaTotal() << endl;
            cout << "\n";
            break;
        }

        case 2:
        {
            int resta1 = 0, resta2 = 0;

            cout << "\n";
            cout << "       Operacion Resta \n \n";
            cout << "       por favor ingrese primer valor : ";
            cin >> resta1;
            cout << "       por favor ingrese segundo valor : ";
            cin >> resta2;

            Resta testResta = Resta(resta1, resta2);

            cout << "\n";
            cout << "       Resultado de " << resta1 << " - " << resta2 << " = ";
            cout << testResta.restaTotal() << endl;
            cout << "\n";
            break;
        }

        case 3:
        {
            int producto1 = 0, producto2 = 0;

            cout << "\n";
            cout << "       Operacion Multiplicación \n \n";
            cout << "       por favor ingrese primer valor : ";
            cin >> producto1;
            cout << "       por favor ingrese segundo valor : ";
            cin >> producto2;

            Producto testProducto = Producto(producto1, producto2);

            cout << "\n";
            cout << "       Resultado de " << producto1 << " * " << producto2 << " = ";
            cout << testProducto.multTotal() << endl;
            cout << "\n";
            break;
        }

        case 4:
        {
            int div1 = 0, div2 = 0;

            cout << "\n";
            cout << "       Operacion División \n \n";
            cout << "       por favor ingrese primer valor : ";
            cin >> div1;
            cout << "       por favor ingrese segundo valor : ";
            cin >> div2;

            Division testDivision = Division(div1, div2);

            cout << "\n";
            cout << "       Resultado de " << div1 << " / " << div2 << " = ";
            cout << testDivision.divTotal() << endl;
            cout << "\n";
            break;
        }

        case 5:
        {
            int mod1 = 0, mod2 = 0;

            cout << "\n";
            cout << "       Operacion Módulo \n \n";
            cout << "       por favor ingrese primer valor : ";
            cin >> mod1;
            cout << "       por favor ingrese segundo valor : ";
            cin >> mod2;

            Modulo testModulo = Modulo(mod1, mod2);

            cout << "\n";
            cout << "       Resultado de " << mod1 << " % " << mod2 << " = ";
            cout << testModulo.modTotal() << endl;
            cout << "\n";
            break;
        }
        }

        return 0;
    } while (op != 6);
}