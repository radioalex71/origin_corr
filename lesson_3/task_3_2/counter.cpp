// NetoHomework_3_3_02
// Author: Ryabinkin Alexey
// Data: 22.03.25

#include <iostream>
#include <windows.h>
#include <string>

class Counter //создание класса Counter
{
private:
    int counter{}; //поле для хранения значения счетчика

public:
    Counter(int value) : counter{ value } //конструктор с параметрами
    { }
    Counter () {} //конструктор без параметров

    void add() { ++counter; }; //метод для увеличения значения счетчика
    
    void sub(int value) { --counter; }; //метод для уменьшения значения счетчика
    
    int equal(int value) { return counter; }; //метод для вывода значения счетчика
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    //вспомогательные переменные
    int val{};
    std::string q{};
    
    //определение варинта с введением начального значения, или автоматическом 
    //присвоении счетчику значения "1" 
    std::cout << "Вы хотите ввести начальное значение счетчика? Введите да или нет:  ";
    std::cin >> q;
    
    if (q == "да")
    {
        std::cout << "Введите начальное значение счетчика:  ";
        std::cin >> val;
    }
    else if (q == "нет")
    {
        val = 1;
    };
    
    Counter count{val}; //создание экземпляра класса Counter
        char menu{};
    do //основной цикл работы счетчика
    {
        std::cout << "Введите команду ('+', '-', '=', или 'x'/англ. раскл./): ";
        std::cin >> menu;
        
        switch (menu)
        {
        case '+':
            count.add();
            break;

        case '-':
            count.sub(val);
            break;

        case '=':
            std::cout << count.equal(val) << std::endl;
            break;

        case 'x':
            std::cout << "До свидания!" << std::endl;
            break;

        default:
            std::cout << "Неверный символ!" << std::endl;
            break;
        }
    } while (menu != 'x'); //условие выхода "х"

    return 0;
}

