#include "myparentclass.h"

MyParentClass::MyParentClass()
{
    cout << "MyParentClass muodostin" << endl;
}

MyParentClass::~MyParentClass()
{
    cout << "MyParentClass tuhoaja" << endl;
}

void MyParentClass::functionOne()
{
    cout << "MyParentClass virtual functionOne()" << endl;
}

void MyParentClass::functionTwo()
{
    cout << "MyParentClass virtual functionTwo()" << endl;
}

