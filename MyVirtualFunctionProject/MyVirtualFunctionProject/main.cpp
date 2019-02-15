#include "mysubclass.h"

int main()
{
    MySubClass *objectMySubClass = new MySubClass;

    objectMySubClass->functionOne();
    objectMySubClass->functionTwo();
    objectMySubClass->MyParentClass::functionTwo();

    delete objectMySubClass;
    objectMySubClass = NULL;

    return 0;
}
