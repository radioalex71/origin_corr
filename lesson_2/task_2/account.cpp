// NetoHomework_3_2_02
// Author: Ryabinkin Alexey
// Data: 03.03.25

#include <iostream>
#include <string>
#include <Windows.h>

struct account //создание структуры для хранения данных о банковском счете
{
    int number{};
    std::string name{};
    float balanсe{};

    float setBalance{};
};

void changeBalance(account& newbalance) //создание функции для изменения баланса
{
    newbalance.balanсe = newbalance.setBalance;
}

int main()
{
    //настройка консоли для ввода-вывода русского текста
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //объявление экземпляра структуры и его инициализация
    account person{};
    std::cout << "Введите номер счета: ";
    std::cin >> person.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> person.name;
    std::cout << "Введите баланс: ";
    std::cin >> person.balanсe;
    std::cout << "Введите новый баланс: ";
    std::cin >> person.setBalance;
    std::cout << std::endl;
    
    changeBalance(person); //вызов функции для изменения баланса

    //вывод информации о банковском счете
    std::cout << "Ваш счет: " << person.name << ",  " << person.number << ",  " << person.balanсe << std::endl;

    return 0;
}

