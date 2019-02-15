#include "mysubclass.h"

MySubClass::MySubClass() : mySubMemberVariable(100)
{
    cout << "MySubClass muodostin" << endl;
    cout << "mySubMemberVariable jäsenmuuttujan arvo= " << mySubMemberVariable << endl;
    myParentMemberVariable = 200;
}

MySubClass::~MySubClass()
{
    cout << "MySubClass tuhoaja" << endl;
}
