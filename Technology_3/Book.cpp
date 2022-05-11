#include "Book.h"

#include <string>
Book::Book(fstream& ptr)
{

    getline(ptr, name);

    getline(ptr, year);

    getline(ptr, publisher);

    getline(ptr, num);

    getline(ptr, annotacion);
}
Book::Book()
{
    name = year = publisher = num = annotacion = '0';
}
Book::~Book()
{
    cout << "Book dead" << endl;
}

Book::Book(const char a[], const char b[], const char c[], const char d[], const char e[])
{
    name = a;
    year = b;
    publisher = c;
    num = d;
    annotacion = e;
}
Book::Book(const Book& init)
{
    name = init.name;
    year = init.year;
    publisher = init.publisher;
    num = init.num;
    annotacion = init.annotacion;
}
void Book::say_my_name()
{
    cout << "�����" << endl;
}

void Book::setData()
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
void Book::print()
{
    this->say_my_name();
    cout << "������������: " << name << endl;
    cout << "��� �������: " << year << endl;
    cout << "��������: " << publisher << endl;
    cout << "���������� �������: " << num << endl;
    cout << "���������:\n" << annotacion << endl;
}
