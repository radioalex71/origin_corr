//���� � �������� ����� ��� ������ �������������� ������������
#include "triangle90.h"

triangle90::triangle90()
{
	this->name = "������������� �����������: ";
	this->C = 90;
};

triangle90::triangle90(int a, int b, int c, int A, int B)
{
	name = "������������� �����������: ";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = 90;
};
