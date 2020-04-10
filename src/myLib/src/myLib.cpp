#include <myLib/myLib.h>

myLib::summationClass::summationClass()
{
}

myLib::summationClass::~summationClass()
{
}

double myLib::summationClass::doSomething(double op1, double op2)
{
    return op1 + op2;
}

myLib::differenceClass::differenceClass() :
        summationClass()
{
}

myLib::differenceClass::~differenceClass()
{
}

double myLib::differenceClass::doSomething(double op1, double op2)
{
    return op1 - op2;
}
