#include "quadroTample.h"

quadroTample::quadroTample()
{
    this->field1 = 4;
    this->name = "���������������: ";
};

quadroTample::quadroTample(int a, int b, int c, int d, int A, int B, int C, int D)
{
    this->field1 = 4;
    this->name = "���������������: ";
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = D;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
};
void quadroTample::get_info()
{
    std::cout << name << std::endl;
    std::cout << "�������: � = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
    std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
    std::cout << std::endl;
}