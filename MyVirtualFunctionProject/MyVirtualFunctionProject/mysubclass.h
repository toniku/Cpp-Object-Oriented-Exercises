#ifndef MYSUBCLASS_H
#define MYSUBCLASS_H
#include <iostream>
#include "myparentclass.h"

using namespace std;

class MySubClass : public MyParentClass
{
public:
    MySubClass();
    ~MySubClass();
    virtual void functionTwo() override;
};

#endif // MYSUBCLASS_H
