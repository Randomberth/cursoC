#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

double sumados(double num1,double num2){
	double total=0;
	total=num1+num2;
	return total;
}
double restados(double num1,double num2){
	double total=0;
	total=num1-num2;
	return total;
}
double multiplicados(double num1,double num2){
	double total=0;
	total=num1*num2;
	return total;
}
double divididos(double divid,double divis){
	double total=0;
	total=divid/divis;
	return total;
}
int modulados(int num1,int num2){
	int total=0;
	total=num1%num2;
	return total;
}

int main(){
	
	system("Color 40");
	setlocale(LC_ALL,"spanish");
	int select;
do{
		
	cout << "Si necesitas realizar una Operacion, escoge una de las siguientes opciones:" <<endl;
	cout << "\n1.- Suma." <<endl;
	cout << "2.- Resta." <<endl;
	cout << "3.- Multiplicacion." <<endl;
	cout << "4.- Division." <<endl;
	cout << "5.- Modulo." <<endl;
	cout << "6.- Salir." <<endl;
	cin >> select;
	
	switch (select) {
		case 1:
			
			double num1,num2,total;
			
			cout << "SUMA." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a sumar." <<endl;
			cout << "\nValor 1: ";
			cin >> num1;
			cout << "\nValor 2: ";
			cin >> num2;
			total=sumados(num1,num2);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
			break;
		case 2:{
			double num1,num2,total;
						
			cout << "RESTA." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a restar." <<endl;
			cout << "\nValor 1: ";
			cin >> num1;
			cout << "\nValor 2: ";
			cin >> num2;
			total=restados(num1,num2);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
			}
			break;
	    case 3:{
			double num1,num2,total;
							
			cout << "MULTIPLICACION." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a multiplicar." <<endl;
			cout << "\nValor 1: ";
			cin >> num1;
			cout << "\nValor 2: ";
			cin >> num2;
			total=multiplicados(num1,num2);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
			}
			break;
		case 4:{
			double divid,divis,total;
								
			cout << "DIVISION." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a dividir." <<endl;
			cout << "\nDividendo: ";
			cin >> divid;
			cout << "\nDivisor: ";
			cin >> divis;
			total=divididos(divid,divis);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
			}
			break;
		case 5:{
			int num1,num2,total;
									
			cout << "MODULO." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a modular." <<endl;
			cout << "\nValor 1: ";
			cin >> num1;
			cout << "\nValor 2: ";
			cin >> num2;
			total=modulados(num1,num2);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
			}
			break;
		case 6:
			cout << "\nMuchas gracias ĄSAYONARA!.";
			break;
		default:
			cout << "Seleccion invalida, por favor intente de nuevo." <<endl;
			break;
	   }
   }while(select != 6);
   
    return 0;
}