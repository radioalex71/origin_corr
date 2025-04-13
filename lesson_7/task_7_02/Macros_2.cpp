// NetoHomework_3_7_02
// Author: Ryabinkin Alexey
// Data: 13.04.25

#include <iostream>
#define SUB(a, b) ((a)-(b)) //макрос разности 2-х чисел


int main(int argc, char** argv)
{
    //инициализируем переменные
    int a = 20;
    int b = 10;
    int c = 3;
    
    //вызывваем макрос SUB для выполнения 3-х задач
    std::cout << SUB(a, b) << std::endl;
    std::cout << SUB(a, b) * c << std::endl;
    std::cout << SUB(a, b + c) * c << std::endl;

    return 0;
}

