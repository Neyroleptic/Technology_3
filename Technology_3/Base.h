#pragma once
#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;
class Base
{
protected:
    string name;
    string year;
    string publisher;
    string num;
    string annotacion;
public:
    virtual ~Base() { cout << "Base dead" << endl; };
    virtual void print() = 0;
    virtual void say_my_name() = 0;
};