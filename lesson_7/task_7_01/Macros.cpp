// NetoHomework_3_7_01
// Author: Ryabinkin Alexey
// Data: 12.04.25

#include <iostream>
#include <Windows.h>
#include <string>

#define MODE 1 //определяем символьную константу 

#ifndef MODE //проверка условия определения константы
#error Определите константу MODE! //сообщение об ошибке
#endif // !MODE

#if (MODE == 1) //условие введения функции сложения
    void add() //ввод функции сложения
    {
    int num1{};
    int num2{};
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: " << num1 + num2 << std::endl;
    }
#endif

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

#if MODE == 1 //при значение константы 1 - вызов функции сложения
    std::cout << "Работаю в боевом режиме" << std::endl;
    add();
#elif MODE == 0 //при значение константы 0 - тренировка
    std::cout << "Работаю в режиме тренировки";
    std::cout << std::endl;
#else //предупреждение о некорректном значении
    std::cout << "Неизвестный режим.Завершение работы.";
    std::cout << std::endl;
#endif

    return 0;
}

