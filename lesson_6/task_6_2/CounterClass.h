//������������ ���� 'CounterClass.h'

#pragma once

class CounterClass //�������� ������ CounterClass
{
private:
    int counter{}; //���� ��� �������� �������� ��������

public: 
    CounterClass(int value); //����������� � ����������
    
    void add(); //����� ��� ���������� �������� ��������

    void sub(); //����� ��� ���������� �������� ��������

    int equal(); //����� ��� ������ �������� ��������
};