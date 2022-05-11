

#include "Journal.h"
#include<string>
Journal::Journal(fstream& ptr)
{
    getline(ptr, name);
    getline(ptr, year);
    getline(ptr, publisher);
    getline(ptr, num);
    getline(ptr, annotacion);
}
Journal::Journal()
{
    name = year = publisher = num = annotacion = '0';
}
Journal::~Journal()
{
    cout << "journal dead" << endl;
}
void Journal::say_my_name()
{
    cout << "������" << endl;
}
Journal::Journal(const char a[], const char b[], const char c[], const char d[], const char e[])
{
    name = a;
    year = b;
    publisher = c;
    num = d;
    annotacion = e;
}
Journal::Journal(const Journal& init)
{
    name = init.name;
    year = init.year;
    publisher = init.publisher;
    num = init.num;
    annotacion = init.annotacion;
}
void Journal::print()
{
    this->say_my_name();
    cout << "������������: " << name << endl;
    cout << "��� �������: " << year << endl;
    cout << "��������: " << publisher << endl;
    cout << "���������� �������: " << num << endl;
    cout << "���������:\n" << annotacion << endl;
}
void Journal::setData()
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
