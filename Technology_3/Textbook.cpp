#include "Textbook.h"

#include <iostream>
#include <string>

Textbook::Textbook(fstream& ptr)
{

    getline(ptr, name);

    getline(ptr, year);

    getline(ptr, publisher);

    getline(ptr, num);

    getline(ptr, annotacion);
}
Textbook::Textbook()
{
    name = year = publisher = num = annotacion = '0';
}
Textbook::~Textbook()
{
    cout << "Textbook dead" << endl;
}

Textbook::Textbook(const char a[], const char b[], const char c[], const char d[], const char e[])
{
    name = a;
    year = b;
    publisher = c;
    num = d;
    annotacion = e;
}
Textbook::Textbook(const Textbook& init)
{
    name = init.name;
    year = init.year;
    publisher = init.publisher;
    num = init.num;
    annotacion = init.annotacion;
}
void Textbook::say_my_name()
{
    cout << "�������" << endl;
}
void Textbook::setData()
{
    cout << "������� ������������" << endl;
    getchar();
    getline(cin, name);
    cout << "������� ��� �������" << endl;
    getline(cin, year);
    cout << "������� ��������" << endl;
    getline(cin, publisher);
    cout << "������� ���������� �������" << endl;
    getline(cin, num);
    cout << "�������� ���������" << endl;
    getline(cin, annotacion);
}
void Textbook::print()
{
    this->say_my_name();
    cout << "������������: " << name << endl;
    cout << "��� �������: " << year << endl;
    cout << "��������: " << publisher << endl;
    cout << "���������� �������: " << num << endl;
    cout << "���������:\n" << annotacion << endl;
}
