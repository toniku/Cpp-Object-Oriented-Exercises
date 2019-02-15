#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H
#include <iostream>
using namespace std;

class MyFirstClass
{
public:
    void myFirstMemberFunction();
    void mySecondMemberFunction();
    short myThirdFunction(short parameterOne);
    void myFourthFunction(short parameterOne);
    void myFiveFunction();

private:
    short myFirstMemberVariable;
    short numberOne, numberTwo;

};

#endif // MYFIRSTCLASS_H
