#include "mydynamicclass.h"

MyDynamicClass::MyDynamicClass()
{
    cout << "Olio-luotu" << endl;
    myMemberVariable = 15;
    cout << "Olion ensimmainen muistipaikka on: " << this << endl;
}

MyDynamicClass::~MyDynamicClass()
{
    cout << "Olio tuhottu" << endl;
    myMemberVariable = 0;
}

void MyDynamicClass::myDynamicFunction()
{
    cout << "kekomuistissa: " << &myMemberVariable << endl;
    myFunction();
    this->myFunction();
    this->myThisFunction(this);
}

void MyDynamicClass::myFunction()
{
    cout << "hello" << endl;
}

void MyDynamicClass::myThisFunction(MyDynamicClass *parameterThis)
{
    cout << "parameterThis muistiosoite: " << parameterThis << endl;
    parameterThis->myFunction();
}
