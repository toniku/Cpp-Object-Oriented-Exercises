
#include "my2class.h"

My2Class::My2Class()
{
    cout << "Luokasta My2Class luotiin olio" << endl;
    myVariable = 10; // muuttuja alkuarvo
}

My2Class::My2Class(short parameter)
{
    cout << "Luokasta My2Class luotiin olio" << endl;
    cout << "muodostinfunktion parametrin arvo =" << parameter << endl;
}

My2Class::~My2Class()
{
    myVariable = 0;
    cout << "Olio tuhottiin" << endl;
}

void My2Class::setValue(short paraValue)
{
    myVariable=paraValue;
}

short My2Class::getValue()
{
    return myVariable;
}

void My2Class::showMemory()
{
    cout << "Muuttujan myVariable muistiosoite pinossa: " << &myVariable << endl;
}
