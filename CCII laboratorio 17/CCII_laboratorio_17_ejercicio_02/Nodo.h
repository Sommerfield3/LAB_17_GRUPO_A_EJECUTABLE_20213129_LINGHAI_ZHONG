#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
template<typename T>
class Nodo{
public:
	T datos;
	Nodo* siguienteNodo;
	Nodo();
	~Nodo();
	Nodo(T datoIngresado);
};
#endif
