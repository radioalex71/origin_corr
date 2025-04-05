//заголовочный файл 'CounterClass.h'

#pragma once

class CounterClass //создание класса CounterClass
{
private:
    int counter{}; //поле для хранения значения счетчика

public: 
    CounterClass(int value); //конструктор с параметром
    
    void add(); //метод для увеличения значения счетчика

    void sub(); //метод для уменьшения значения счетчика

    int equal(); //метод для вывода значения счетчика
};