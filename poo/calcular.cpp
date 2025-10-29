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

int main()
{
    Suma testSuma = Suma(25, 45);

    cout << "prueba : " << testSuma.sumaTotal() << endl;
    return 0;
}