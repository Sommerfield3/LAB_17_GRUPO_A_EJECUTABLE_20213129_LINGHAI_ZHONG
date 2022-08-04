#include "Calculadora.h"
template <typename T>
Calculadora<T>::Calculadora() {
}
template <typename T>
Calculadora<T>::~Calculadora() {
	
}
template <typename T>
T Calculadora<T>::suma(T x, T y){
	return x + y;
}
template <typename T>
T Calculadora<T>::resta(T x, T y){
	return x - y;
}
template <typename T>
T Calculadora<T>::multiplicacion(T x, T y){
	return x * y;
}
template <typename T>
T Calculadora<T>::division(T x, T y){
	return x / y;
}
