//заголовочный файл для класса фигуры
#pragma once
#include <iostream>
#include <Windows.h>
#include <string>

class figura
{
protected:
    int field1;
    std::string name;
public:
    figura();
    int get_sides_count();
    std::string get_name();
    virtual void get_info();
};