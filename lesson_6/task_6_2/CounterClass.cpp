//файл 'CounterClass.cpp' с объявлением конструктора и методов работы счетчика

#include <iostream>
#include "CounterClass.h"

int counter{};
CounterClass::CounterClass(int value) : counter{ value } //конструктор с параметрами
{
};

void CounterClass::add() { ++counter; }; //метод для увеличения значения счетчика

void CounterClass::sub() { --counter; }; //метод для уменьшения значения счетчика

int CounterClass::equal() { return counter; }; //метод для вывода значения счетчика