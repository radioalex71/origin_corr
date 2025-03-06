// NetoHomework_3_2_01
// Author: Ryabinkin Alexey
// Data: 03.03.25

#include <iostream>

enum class months //описание перечисления месяцев
{
    january = 1, //нумерацию начинаем с "1"
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian"); //настройка консоли для работы с русскими буквами
    int number{}; //объявление и инициализация переменной для хранения введенного значения
    do //цикл для ввода значений и вывода информации
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> number;
        
        months month = static_cast <months> (number); //преобразование пользовательского ввода к типу перечисления
        
        switch (month) //цикл для вывода информацмм в зависимости от входного значения
        {
        case months::january:
            std::cout << "Январь" << std::endl;
            break;
        case months::february:
            std::cout << "Февраль" << std::endl;
            break;
        case months::march:
            std::cout << "Март" << std::endl;
            break;
        case months::april:
            std::cout << "Апрель" << std::endl;
            break;
        case months::may:
            std::cout << "Май" << std::endl;
            break;
        case months::june:
            std::cout << "Июнь" << std::endl;
            break;
        case months::july:
            std::cout << "Июль" << std::endl;
            break;
        case months::august:
            std::cout << "Август" << std::endl;
            break;
        case months::september:
            std::cout << "Сентябрь" << std::endl;
            break;
        case months::october:
            std::cout << "Октябрь" << std::endl;
            break;
        case months::november:
            std::cout << "Ноябрь" << std::endl;
            break;
        case months::december:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            if (number != 0)
            {
                std::cout << "Неправильный номер!" << std::endl; //в случае, если ввод отличается от диапазона "1 - 12"
            }
            break;
        }
    } while (number != 0); //выполнение цикла, пока ввод не равен "0"
    
    std::cout << "До свидания!" << std::endl; //при вводе "0" - выход из программы
    
    return 0;
}

