//файл с исходным кодом для класса равнобедренного треугольника
#include "triangleEq.h"

triangleEq::triangleEq()
{
	this->name = "Равнобедренный треугольник: ";
	this->c = a;
	this->C = A;
};

triangleEq::triangleEq(int a, int b, int A, int B)
{
	name = "Равнобедренный треугольник: ";
	this->a = a;
	this->b = b;
	this->c = a;
	this->A = A;
	this->B = B;
	this->C = A;
};