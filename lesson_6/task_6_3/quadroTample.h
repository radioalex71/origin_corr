//заголовочный файл шаблон для классов четырехугольников
#pragma once
#include "figura.h"

class quadroTample : public figura
{
protected:
    int a = 10, b = 20, c = 30, d = 40;
    int A = 50, B = 60, C = 70, D = 80;
public:
    quadroTample();
    quadroTample(int a, int b, int c, int d, int A, int B, int C, int D);
    void get_info() override;
};