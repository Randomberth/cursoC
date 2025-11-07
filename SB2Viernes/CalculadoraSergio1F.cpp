#include <iostream>
#include <cmath>
#include <locale.h>
#include <cstdlib>
using namespace std;

double operacion(double num1,double num2, double divid, double divis, int mod1, int mod2, char oper){
	if(oper=='+'){
		double total=0;
		total=num1+num2;
		return total;
	}else if(oper=='-'){
		double total=0;
		total=num1-num2;
		return total;
	}else if(oper=='*'){
		double total=0;
		total=num1*num2;
		return total;
	}else if(oper=='/'){
		double total=0;
		total=divid/divis;
		return total;
	}else if(oper=='%'){
		int modt=0;
		modt=mod1%mod2;
		return modt;
	}else {
		return 0;
	}
}

int main()
{
	system("Color 40");
	setlocale(LC_ALL,"spanish");
	double num1, num2, divid, divis, total;
	int mod1, mod2, modt;
	char oper;
	
	cout << "Buenas, 、ienvenido a tu calculadora cutre!"<<endl;
	cout << "Tienes varias opciones de operaciones para realizar."<<endl;
	cout << "Por favor ingresa la que te interese (con el simbolo correspondiente)"<<endl;
	cout << "Y tambien cuentas con la opcion de salir del sistema."<<endl;
	cout << "\n----- MENU DE OPERACIONES -----"<<endl;
	cout << "\n(+).- Suma." <<endl;
	cout << "(-).- Resta." <<endl;
	cout << "(*).- Multiplicacion." <<endl;
	cout << "(/).- Division." <<endl;
	cout << "(%).- Modulo." <<endl;
	cout << "(#).- Salir." <<endl;
	cin >> oper;
	
	switch (oper) {
		
		case '+':{
		    double num1,num2,total;
					
			cout << "SUMA." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a sumar." <<endl;
			cout << "\nValor 1: ";
			cin >> num1;
			cout << "\nValor 2: ";
			cin >> num2;
			total=operacion(num1,num2,divid,divis,mod1,mod2,oper);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
		    }
			break;
		case '-':{
			double num1,num2,total;
								
			cout << "RESTA." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a restar." <<endl;
			cout << "\nValor 1: ";
			cin >> num1;
			cout << "\nValor 2: ";
			cin >> num2;
			total=operacion(num1,num2,divid,divis,mod1,mod2,oper);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
			}
			break;
		case '*':{
			double num1,num2,total;
									
			cout << "MULTIPLICACION." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a multiplicar." <<endl;
			cout << "\nValor 1: ";
			cin >> num1;
			cout << "\nValor 2: ";
			cin >> num2;
			total=operacion(num1,num2,divid,divis,mod1,mod2,oper);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
			}
			break;
		case '/':{
			double divid,divis,total;
										
			cout << "DIVISION." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a dividir." <<endl;
			cout << "\nDividendo: ";
			cin >> divid;
			cout << "\nDivisor: ";
			cin >> divis;
			total=operacion(num1,num2,divid,divis,mod1,mod2,oper);
			cout << "\nEl resultado de la operacion es: " <<total << endl;
			}
			break;
		case '%':{
			int mod1,mod2,modt;
											
			cout << "MODULO." <<endl;
			cout << "Ingrese por favor el valor de los 2 numeros a modular." <<endl;
			cout << "\nValor 1: ";
			cin >> mod1;
			cout << "\nValor 2: ";
			cin >> mod2;
			modt=operacion(num1,num2,divid,divis,mod1,mod2,oper);
			cout << "\nEl resultado de la operacion es: " <<modt << endl;
			}
			break;
		case '#':{
			cout << "\nMuchas gracias ﹖AYONARA!.";
		    }
			break;
		default:{
			cout << "Seleccion invalida, por favor intente de nuevo." <<endl;
		    }
			break;
	}while(oper != '#')
			   
			   return 0;
			
}