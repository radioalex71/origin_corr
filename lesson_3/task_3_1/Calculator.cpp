// NetoHomework_3_3_01
// Author: Ryabinkin Alexey
// Data: 17.03.25

#include <iostream>

class Calculator //обЪявление класса
{
    //поля класса
private:
    double num1{};
    double num2{};

public:
    //конструктор с параметрами
    Calculator(double num1, double num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    //методы класса
    double add(double num1,double num2) { return num1 + num2; };
    double multiply(double num1, double num2) { return num1 * num2; };
    double substract_1_2(double num1, double num2) { return num1 - num2; };
    double substract_2_1(double num1, double num2) { return num2 - num1; };
    double divide_1_2(double num1, double num2) { return num1 / num2; };
    double divide_2_1(double num1, double num2) { return num2 / num1; };
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

    Calculator calc(0,0); //экземпляр класса
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
     std::cout << "num1 + num2 = " << calc.add(num1,num2) << std::endl;
     std::cout << "num1 * num2 = " << calc.multiply(num1, num2) << std::endl;
     std::cout << "num1 - num2 = " << calc.substract_1_2(num1, num2) << std::endl;
     std::cout << "num2 - num1 = " << calc.substract_2_1(num1, num2) << std::endl;
     std::cout << "num1 / num2 = " << calc.divide_1_2(num1, num2) << std::endl;
     std::cout << "num2 / num1 = " << calc.divide_2_1(num1, num2) << std::endl;
    
    } while (1>0);
    
    return 0;
}

