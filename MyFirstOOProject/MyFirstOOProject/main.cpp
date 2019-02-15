#include "myfirstclass.h"

int main()
{
    MyFirstClass objectMyFirstClass;
    objectMyFirstClass.myFirstMemberFunction();
    objectMyFirstClass.mySecondMemberFunction();
    objectMyFirstClass.myThirdFunction(1);
    objectMyFirstClass.myFourthFunction(objectMyFirstClass.myThirdFunction(10));
    return 0;
}
