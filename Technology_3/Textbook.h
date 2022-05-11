#pragma once
#include "Base.h"
class Textbook : public Base
{
public:
    Textbook();
    Textbook(fstream& ptr);
    Textbook(const char a[], const char b[], const char c[], const char d[], const char e[]);
    Textbook(const Textbook& init);
    ~Textbook();
    string* getName() { return &name; }
    string* getYear() { return &year; }
    string* getPublisher() { return &publisher; }
    string* getNum() { return &num; }
    string* getAnnotacion() { return &annotacion; }
    void setData();
    void print();
    void say_my_name() override;
};
