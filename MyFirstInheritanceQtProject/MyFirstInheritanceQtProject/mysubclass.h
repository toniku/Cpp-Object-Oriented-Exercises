#ifndef MYSUBCLASS_H
#define MYSUBCLASS_H
#include "myparentclass.h"
#include <iostream>
using namespace std;

class MySubClass : public MyParentClass
{
public:
    MySubClass();
    ~MySubClass();

private:
    short mySubMemberVariable;
};

#endif // MYSUBCLASS_H
