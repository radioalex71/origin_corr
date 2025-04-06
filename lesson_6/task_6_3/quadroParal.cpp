//файл с исходным кодом для класса параллелограмма
#include "quadroParal.h"
quadroParal::quadroParal()
{
    this->name = "Параллелограмм: ";
    this->c = a;
    this->d = b;
    this->C = A;
    this->D = B;
};

quadroParal::quadroParal(int a, int b, int A, int B)
{
    this->name = "Параллелограмм: ";
    this->a = a;
    this->c = a;
    this->b = b;
    this->d = b;
    this->A = A;
    this->C = A;
    this->B = B;
    this->D = B;
}