#include "myfirstclass.h"

void MyFirstClass::myFirstMemberFunction()
{
    myFirstMemberVariable = 10;
    cout << "myFirstMemberVariable =" << myFirstMemberVariable << endl;

}

void MyFirstClass::mySecondMemberFunction()
{
    numberOne = 20;
    numberTwo = 30;
    cout << "Summa =" << numberOne + numberTwo << endl;
    cout << "Erotus =" << numberOne - numberTwo << endl;
    cout << "Tulo =" << numberOne * numberTwo << endl;
    cout << "Jako" << numberOne / numberTwo << endl;
}

short MyFirstClass::myThirdFunction(short parameterOne)
{
    short localVariable;
    localVariable = parameterOne * 10;
    return localVariable;
}

void MyFirstClass::myFourthFunction(short parameterOne)
{
    cout << "Jasenfunktion arvo =" << parameterOne << endl;
    myFiveFunction();
}

void MyFirstClass::myFiveFunction()
{
    cout << "Hei täällä ollaan!" << endl << numberOne << endl << numberTwo << endl;
}
