// NetoHomework_3_6_01
// Author: Ryabinkin Alexey
// Data: 05.04.25
// �������� ���� � �������� ����� 'Source.cpp'

// ����������� ���������
#include <iostream>
#include <Windows.h>
#include "MathFunc.h" //����������� ���������� ������������� �����

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//���������� ����������
	double num1{}, num2{};
	int var{};
	
	//���� �������� ������
	std::cout << "������� ������ �����:  ";
	std::cin >> num1;
	std::cout << "������� ������ �����:  ";
	std::cin >> num2;
	
	//����� �������������� �������� � ����� �����������
	std::cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������):  ";
	std::cin >> var;
	
		switch (var)
		{
		case 1:
			std::cout << num1 << " ���� " << num2 << " = " << add(num1, num2) << std::endl;
			break;
		case 2:
			std::cout << num1 << " ����� " << num2 << " = " << substruct(num1, num2) << std::endl;
			break;
		case 3:
			std::cout << num1 << " �������� �� " << num2 << " = " << multiply(num1, num2) << std::endl;
			break;
		case 4:
			if (num2 != 0) //�������� �� ����������� 0 ������� ����� num2
			{
				std::cout << num1 << " ��������� �� " << num2 << " = " << division(num1, num2) << std::endl;
			}
			else
			{
				std::cout << "������ �� '0' ������!" << std::endl;
			}
			break;
		case 5:
			std::cout << num1 << " � ������� " << num2 << " = " << degree(num1, num2) << std::endl;
			break;
		default:
			//�������������� � ������������ ����� �������� ��� ������ �������������� ��������
			std::cout << "�� ���������� ����� �������������� ��������!" << std::endl;
			break;
		}
	return 0;
}