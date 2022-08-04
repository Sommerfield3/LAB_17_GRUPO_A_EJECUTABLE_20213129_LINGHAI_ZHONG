#ifndef CALCULADORA_H
#define CALCULADORA_H
template <typename T>
class Calculadora {
public:
	Calculadora();
	~Calculadora();
	T suma(T x,T y);
	T resta(T x,T y);
	T multiplicacion(T x,T y);
	T division(T x,T y);
};

#endif

