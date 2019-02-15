#include "myparentclass.h"

MyParentClass::MyParentClass()
{
    myParentMemberVariable = 10;
    cout << "MyParentClass muodostin" << endl;
}

MyParentClass::~MyParentClass()
{
    cout << "MyParentClass tuhoaja" << endl;
}

void MyParentClass::myParentMemberFunction()
{
    cout << "MyParentClass jäsenfunktio myParentMemberFunction" << endl;
    cout << "MyParentMemberVariable jasenmuuttujan arvo = " << myParentMemberVariable << endl;
}
