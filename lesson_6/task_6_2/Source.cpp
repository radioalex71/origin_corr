//файл с исходным кодом
#include <iostream>
#include <windows.h>
#include <string>
#include "CounterClass.h" //подключение заголовочного файла

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

    CounterClass count { val }; //создание экземпляра класса Counter
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
            count.sub();
            break;

        case '=':
            std::cout << count.equal() << std::endl;
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