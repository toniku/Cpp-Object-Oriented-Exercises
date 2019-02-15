#include "mysubclass.h"

MySubClass::MySubClass()
{
    cout << "MySubClass muodostin" << endl;
}

MySubClass::~MySubClass()
{
    cout << "MySubClass tuhoaja" << endl;
}

void MySubClass::functionTwo()
{
    cout << "MySubClass virtual functionTwo()" << endl;
}
