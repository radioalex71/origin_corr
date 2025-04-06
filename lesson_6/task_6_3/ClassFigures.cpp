// NetoHomework_3_6_03
// Author: Ryabinkin Alexey
// Data: 06.04.25
// Основной файл с исходным кодом 'ClassFigures.cpp'

#include "triangle90.h"
#include "triangleEq.h"
#include "triangleEqSide.h"
#include "quadroRect.h"
#include "quadroSquare.h"
#include "quadroParal.h"
#include "quadroRhomb.h"

void print_info(figura* a)
{
    a->get_info();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    triangle tri;
    triangle90 tri1;
    triangleEq tri2;
    triangleEqSide tri3;
    quadroTample quadro;
    quadroRect quadro1;
    quadroSquare quadro2;
    quadroParal quadro3;
    quadroRhomb quadro4;

    print_info(&tri);
    print_info(&tri1);
    print_info(&tri2);
    print_info(&tri3);
    print_info(&quadro);
    print_info(&quadro1);
    print_info(&quadro2);
    print_info(&quadro3);
    print_info(&quadro4);

    return 0;
}