//���� � �������� ����� ��� ������ �����
#include "quadroRhomb.h"

quadroRhomb::quadroRhomb()
{
    this->name = "����: ";
    this->c = a;
    this->b = a;
    this->d = a;
};

quadroRhomb::quadroRhomb(int a, int A, int B)
{
    this->name = "����: ";
    this->a = a;
    this->c = a;
    this->b = a;
    this->d = a;
    this->A = A;
    this->B = B;
    this->C = A;
    this->D = B;
};