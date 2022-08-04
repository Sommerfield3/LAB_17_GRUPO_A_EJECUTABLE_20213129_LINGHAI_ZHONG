/*1. Desarrolle un programa simple de calculadora (operciones basicas) que utilice
clases utilizando plantillas*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "Calculadora.h"
#include "Calculadora.cpp"
using namespace std;

int main (int argc, char *argv[]) {
	Calculadora<int> calculadoraInt;
	Calculadora<float> calculadoraFloat;
	Calculadora<char> calculadoraChar;
	cout<<"Operaciones con Enteros: "<<endl;
	int a=12;
	int b=3;
	cout<<"Suma: "<<a<<"+"<<b<<"="<<calculadoraInt.suma(a,b)<<endl;
	cout<<"Resta: "<<a<<"-"<<b<<"="<<calculadoraInt.resta(a,b)<<endl;
	cout<<"Multiplicacion: "<<a<<"*"<<b<<"="<<calculadoraInt.multiplicacion(a,b)<<endl;
	cout<<"Division: "<<a<<"/"<<b<<"="<<calculadoraInt.division(a,b)<<endl;
	
	cout<<"Operaciones con Flotantes: "<<endl;
	float c=12.5;
	float d=2.5;
	cout<<"Suma: "<<c<<"+"<<d<<"="<<calculadoraFloat.suma(c,d)<<endl;
	cout<<"Resta: "<<c<<"-"<<d<<"="<<calculadoraFloat.resta(c,d)<<endl;
	cout<<"Multiplicacion: "<<a<<"*"<<b<<"="<<calculadoraFloat.multiplicacion(c,d)<<endl;
	cout<<"Division: "<<c<<"/"<<d<<"="<<calculadoraFloat.division(c,d)<<endl;
	
	cout<<"Operaciones con Caracteres: "<<endl;
	char e='h';
	char f='b';
	cout<<"Suma: "<<e<<"+"<<f<<"="<<calculadoraChar.suma(e,f)<<endl;
	cout<<"Resta: "<<e<<"-"<<f<<"="<<calculadoraChar.resta(e,f)<<endl;
	cout<<"Multiplicacion: "<<e<<"*"<<f<<"="<<calculadoraChar.multiplicacion(e,f)<<endl;
	cout<<"Division: "<<e<<"/"<<f<<"="<<calculadoraChar.division(e,f)<<endl;
	system("pause");
	return 0;
}

