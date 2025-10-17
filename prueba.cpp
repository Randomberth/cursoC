#include <cmath>
#include <iostream>

int main()
{
    using namespace std;
    /*declaracion de vaiables, siendo operadas por la formula de area = pi* r^2*/
    double areapizzap = 3.14 * 7.5 * 7.5, areapizzag = 3.14 * 15 * 15, area2pizza = 3.14 * 7.5 * 7.5 * 2, resumen = areapizzag - area2pizza;
    /*salida de los resultados*/
    cout << "el area de cada pizza pequenas es : " << areapizzap << " cm^2" << " cada una, el total seria  " << area2pizza << endl;
    cout << " el area de la pizza grande es de : " << areapizzag << " cm^2" << endl;
    cout << " por lo tanto si quiero comer mas deberia comprar la pizza de 30 cm ya que comeria :) " << resumen << " cm^2" << " mas ";
}