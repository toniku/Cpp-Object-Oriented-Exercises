#include <iostream>
#include "my2class.h"

using namespace std;

int main()
{
    My2Class objectMy2Class;
    cout << "Olion my2class jasenmuuttuja arvo=" << objectMy2Class.getValue() << endl;

    objectMy2Class.setValue(5);
    cout << "Olion jasenmuuttujan uusi arvo=" << objectMy2Class.getValue() << endl;

    My2Class objectTest(99);

    My2Class objectOther;
    cout << "Olion objectOther, myvariable arvo=" << objectOther.getValue() << endl;

    objectMy2Class.showMemory();
    objectOther.showMemory();

    return 0;

}
