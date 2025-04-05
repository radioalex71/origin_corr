//файл с объявлением математических функций
#include <iostream>
#include "MathFunc.h" //подключение созданного заголовочного файла

double add(double num1, double num2) //функция сложения
{
	return num1 + num2;
}
double substruct(double num1, double num2) //функция вычитания 
{
	return num1 - num2;
}
double multiply(double num1, double num2) //функция умножения
{
	return num1 * num2;
}
double division(double num1, double num2) //функция деления
{
	return num1 / num2;
}
double degree(double num1, double num2) //функция возведения в степень
{
	num1 = pow(num1, num2);
	return num1;
}


