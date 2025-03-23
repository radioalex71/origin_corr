﻿// NetoHomework_3_3_01
// Author: Ryabinkin Alexey
// Data: 23.03.25

#include <iostream>

class Calculator //обЪявление класса
{
    //поля класса
private:
    double num1{};
    double num2{};

public:
    //конструктор без параметров
    Calculator(){}
    
    //методы класса
    double add() { return num1 + num2; };
    double multiply() { return num1 * num2; };
    double substract_1_2() { return num1 - num2; };
    double substract_2_1() { return num2 - num1; };
    double divide_1_2() { return num1 / num2; };
    double divide_2_1() { return num2 / num1; };
    
    bool set_num1(double num1)
    {
        if (num1 != 0) 
        {
            this->num1 = num1;
            return true; 
        }
        else { return false; }
    }
    bool set_num2(double num2)
    {
        if (num2 != 0) 
        { 
            this->num2 = num2;
            return true; 
        }
        else { return false; }
    }
};


int main()
{
    setlocale(LC_ALL, "rus");
    double num1{};
    double num2{};

    Calculator calc; //экземпляр класса
    do
    {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        if (!calc.set_num1(num1)) //проверка условия на равенство нулю num1
        {
            std::cout << "Неверный ввод!" << std::endl;
            continue;
        }
    
    std::cout << "Введите num2: ";
    std::cin >> num2;
    
        if (!calc.set_num2(num2)) //проверка условия на равенство нулю num2
        {
            do
            {
                std::cout << "Неверный ввод!" << std::endl;
                std::cout << "Введите num2: ";
                std::cin >> num2;
            } while (!calc.set_num2(num2));
        }

    //вывод результатов работы всех методов
     std::cout << "num1 + num2 = " << calc.add() << std::endl;
     std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
     std::cout << "num1 - num2 = " << calc.substract_1_2() << std::endl;
     std::cout << "num2 - num1 = " << calc.substract_2_1() << std::endl;
     std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
     std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
    
    } while (1>0);
    
    return 0;
}

