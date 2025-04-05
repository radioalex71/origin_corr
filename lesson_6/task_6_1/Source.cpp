// NetoHomework_3_6_01
// Author: Ryabinkin Alexey
// Data: 05.04.25
// Основной файл с исходным кодом 'Source.cpp'

// подключение библиотек
#include <iostream>
#include <Windows.h>
#include "MathFunc.h" //подключение созданного заголовочного файла

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//объявление переменных
	double num1{}, num2{};
	int var{};
	
	//ввод исходных данных
	std::cout << "Введите первое число:  ";
	std::cin >> num1;
	std::cout << "Введите второе число:  ";
	std::cin >> num2;
	
	//выбор математических операций и вывод результатов
	std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):  ";
	std::cin >> var;
	
		switch (var)
		{
		case 1:
			std::cout << num1 << " плюс " << num2 << " = " << add(num1, num2) << std::endl;
			break;
		case 2:
			std::cout << num1 << " минус " << num2 << " = " << substruct(num1, num2) << std::endl;
			break;
		case 3:
			std::cout << num1 << " умножить на " << num2 << " = " << multiply(num1, num2) << std::endl;
			break;
		case 4:
			if (num2 != 0) //проверка на неравенство 0 второго числа num2
			{
				std::cout << num1 << " разделить на " << num2 << " = " << division(num1, num2) << std::endl;
			}
			else
			{
				std::cout << "Делить на '0' нельзя!" << std::endl;
			}
			break;
		case 5:
			std::cout << num1 << " в степени " << num2 << " = " << degree(num1, num2) << std::endl;
			break;
		default:
			//предупреждение о неправильном вводе варианта для выбора математической операции
			std::cout << "Не правильный выбор математической операции!" << std::endl;
			break;
		}
	return 0;
}