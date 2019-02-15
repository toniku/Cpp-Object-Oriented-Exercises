#ifndef MY2CLASS_H
#define MY2CLASS_H
#include <iostream>

using namespace std;

class My2Class
{
public:
    My2Class();
    My2Class(short parameter);
    ~My2Class();
    void setValue(short paraValue);
    short getValue();
    void showMemory();

private:
    short myVariable;
};

#endif // MY2CLASS_H
