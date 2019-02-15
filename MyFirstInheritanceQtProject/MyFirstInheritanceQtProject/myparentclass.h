#ifndef MYPARENTCLASS_H
#define MYPARENTCLASS_H
#include <iostream>
#include "mybaseclass.h"

using namespace std;

class MyParentClass : public MyBaseClass
{
public:
    MyParentClass();
    ~MyParentClass();
    void myParentMemberFunction();

protected:
    short myParentMemberVariable;
};

#endif // MYPARENTCLASS_H
