#ifndef MYCOMPOSITIONCLASS_H
#define MYCOMPOSITIONCLASS_H

#include "mypartclass.h"
#include <iostream>

using namespace std;

class MyCompositionClass
{
public:
    MyCompositionClass();
    ~MyCompositionClass();

private:
    MyPartClass *objectMyPartClass; //auto koosteolio
};

#endif // MYCOMPOSITIONCLASS_H
