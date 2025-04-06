//файл с исходным кодом для класса фигуры
#include "figura.h"

figura::figura()
{
    this->field1 = 0;
};

int figura::get_sides_count()
{
    return field1;
}
std::string figura::get_name()
{
    return name;
}
void figura::get_info()
{
    std::cout << name << std::endl;
}