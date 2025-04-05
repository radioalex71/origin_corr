//���� � �������� �����
#include <iostream>
#include <windows.h>
#include <string>
#include "CounterClass.h" //����������� ������������� �����

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //��������������� ����������
    int val{};
    std::string q{};

    //����������� ������� � ��������� ���������� ��������, ��� �������������� 
    //���������� �������� �������� "1" 
    std::cout << "�� ������ ������ ��������� �������� ��������? ������� �� ��� ���:  ";
    std::cin >> q;

    if (q == "��")
    {
        std::cout << "������� ��������� �������� ��������:  ";
        std::cin >> val;
    }
    else if (q == "���")
    {
        val = 1;
    };

    CounterClass count { val }; //�������� ���������� ������ Counter
    char menu{};
    do //�������� ���� ������ ��������
    {
        std::cout << "������� ������� ('+', '-', '=', ��� 'x'/����. �����./): ";
        std::cin >> menu;

        switch (menu)
        {
        case '+':
            count.add();
            break;

        case '-':
            count.sub();
            break;

        case '=':
            std::cout << count.equal() << std::endl;
            break;

        case 'x':
            std::cout << "�� ��������!" << std::endl;
            break;

        default:
            std::cout << "�������� ������!" << std::endl;
            break;
        }
    } while (menu != 'x'); //������� ������ "�"

    return 0;
}