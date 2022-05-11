#pragma once
#include "Base.h"

class Book : public Base
{
public:
    Book();
    Book(fstream& ptr);
    Book(const char a[], const char b[], const char c[], const char d[], const char e[]);
    Book(const Book& init);
    ~Book();
    string* getName() { return &name; }
    string* getYear() { return &year; }
    string* getPublisher() { return &publisher; }
    string* getNum() { return &num; }
    string* getAnnotacion() { return &annotacion; }
    void setData();
    void print() override;
    void say_my_name() override;
};