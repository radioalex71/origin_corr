//файл с исходным кодом для класса прямоугольника
#include "quadroRect.h"

quadroRect::quadroRect()
{
    this->name = "Прямоугольник: ";
    this->c = a;
    this->d = b;
    this->A = 90;
    this->B = A;
    this->C = A;
    this->D = A;
}

quadroRect::quadroRect(int a, int b)
{
    this->name = "Прямоугольник: ";
    this->a = a;
    this->b = b;
    this->c = a;
    this->d = b;
    this->A = 90;
    this->B = A;
    this->C = A;
    this->D = A;
}