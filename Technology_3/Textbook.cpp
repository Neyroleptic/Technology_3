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
    cout << "Учебник" << endl;
}
void Textbook::setData()
{
    cout << "Введите наименование" << endl;
    getchar();
    getline(cin, name);
    cout << "Введите год издания" << endl;
    getline(cin, year);
    cout << "Введите издателя" << endl;
    getline(cin, publisher);
    cout << "Введите количество страниц" << endl;
    getline(cin, num);
    cout << "Напишите аннотацию" << endl;
    getline(cin, annotacion);
}
void Textbook::print()
{
    this->say_my_name();
    cout << "Наименование: " << name << endl;
    cout << "Год издания: " << year << endl;
    cout << "Издатель: " << publisher << endl;
    cout << "Количество страниц: " << num << endl;
    cout << "Аннотация:\n" << annotacion << endl;
}
