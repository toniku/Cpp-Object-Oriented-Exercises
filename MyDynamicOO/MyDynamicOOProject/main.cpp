#include <mydynamicclass.h>

int main()
{
    MyDynamicClass *objectMyDynamicClass;
    cout << "Osoittimien muistiosoite pinossa: " << &objectMyDynamicClass << endl;
    objectMyDynamicClass = new MyDynamicClass;
    objectMyDynamicClass->myDynamicFunction();
    delete objectMyDynamicClass;
    objectMyDynamicClass = NULL;
    objectMyDynamicClass->myDynamicFunction();
    return 0;
}
