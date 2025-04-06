//файл с исходным кодом для класса ромба
#include "quadroRhomb.h"

quadroRhomb::quadroRhomb()
{
    this->name = "Ромб: ";
    this->c = a;
    this->b = a;
    this->d = a;
};

quadroRhomb::quadroRhomb(int a, int A, int B)
{
    this->name = "Ромб: ";
    this->a = a;
    this->c = a;
    this->b = a;
    this->d = a;
    this->A = A;
    this->B = B;
    this->C = A;
    this->D = B;
};