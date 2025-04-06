//файл с исходным кодом для класса равностороннего треугольника
#include "triangleEqSide.h"

triangleEqSide::triangleEqSide()
{
	this->name = "Равносторонний треугольник: ";
	this->c = a;
	this->b = a;
	this->A = 60;
	this->B = A;
	this->C = A;
};

triangleEqSide::triangleEqSide(int a)
{
	name = "Равносторонний треугольник: ";
	this->a = a;
	this->b = a;
	this->c = a;
	this->A = 60;
	this->B = A;
	this->C = A;
};