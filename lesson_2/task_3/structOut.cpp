// NetoHomework_3_2_03
// Author: Ryabinkin Alexey
// Data: 06.03.25

#include <iostream>
#include <string>
#include <Windows.h>

struct address //создание структуры для хранения адреса
{
    std::string city{};
    std::string street{};
    int building{};
    int flat{};
    int index{};
};

void infAd(address& data) //функия для вывода структуры в консоль
{
    std::cout << "Город: " << data.city << std::endl;
    std::cout << "Улица: " << data.street << std::endl;
    std::cout << "Номер дома: " << data.building << std::endl;
    std::cout << "Номер квартиры: " << data.flat << std::endl;
    std::cout << "Почтовый индекс: " << data.index << std::endl;
}

int main()
{
    //настройка консоли для ввода-вывода русского текста
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //создание экземпляров структуры и их инициализация
    address p1{"Юхнов", "Гагарина", 7, 55, 249911};
    address p2{ "Санкт-Петербург", "Энергетиков", 9, 297, 195248};
    
    //код для ручного ввода данных адреса
    /*
    address p{"Юхнов", "Гагарина", 7, 55, 249911};
    std::cout << "Введите город: ";
    std::cin >> p.city;
    std::cout << "Введите улицу: ";
    std::cin >> p.street;
    std::cout << "Введите номер дома: ";
    std::cin >> p.building;
    std::cout << "Введите номер квартиры: ";
    std::cin >> p.flat;
    std::cout << "Введите почтовый индекс: ";
    std::cin >> p.index;
    std::cout << std::endl;
    infAd(p);
    */
    
    infAd(p1); //передача экземпляра р1 в функцию для вывода в консоль
    std::cout << std::endl;
    infAd(p2); //передача экземпляра р1 в функцию для вывода в консоль

    return 0;
}

