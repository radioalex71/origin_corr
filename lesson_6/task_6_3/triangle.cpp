#include "triangle.h"

triangle::triangle()
{
    this->field1 = 3;
    this->name = "�����������: ";
};

triangle::triangle(int a, int b, int c, int A, int B, int C)
{
    this->field1 = 3;
    this->name = "�����������: ";
    //this->C = 90;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
};
void triangle::get_info()
{
    std::cout << name << std::endl;
    std::cout << "�������: � = " << a << ", b = " << b << ", c = " << c << std::endl;
    std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << std::endl;
    std::cout << std::endl;
}
