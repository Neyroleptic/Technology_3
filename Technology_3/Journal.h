
#include <stdio.h>


#include "Base.h"
class Journal : public Base
{
public:
    ~Journal();
    Journal();
    Journal(fstream& ptr);
    Journal(const char a[], const char b[], const char c[], const char d[], const char e[]);
    Journal(const Journal& init);
    string* getName() { return &name; }
    string* getYear() { return &year; }
    string* getPublisher() { return &publisher; }
    string* getNum() { return &num; }
    string* getAnnotacion() { return &annotacion; }
    void setData();
    void print() override;
    void say_my_name() override;
};
