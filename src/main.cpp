
#if defined USE_LIB
#include <myLib/myLib.h>
#endif // USE_LIB

#include <cstdlib>
#include <cmath>
#include <iostream>

int main()
{
#if defined USE_LIB
    std::cout << "Executable example using the library!" << std::endl;

    myLib::summationClass sumClass;
    myLib::differenceClass diffClass;
    double op1 = 15.0;
    double op2 = 10.0;

    std::cout<<"The operators are: "<<op1<<" and "<<op2<<std::endl;
    std::cout<<"The sum is: "<<sumClass.doSomething(op1, op2)<<std::endl;
    std::cout<<"The difference is: "<<diffClass.doSomething(op1, op2)<<std::endl;
#else
    
    std::cout << "Executable standalone example" << std::endl;
    double op1 = 15.0;
    double op2 = 10.0;

    std::cout<<"The operators are: "<<op1<<" and "<<op2<<std::endl;
    std::cout<<"The sum is: "<<op1+op2<<std::endl;
    std::cout<<"The difference is: "<<op1-op2<<std::endl;
#endif // USE_LIB

    return EXIT_SUCCESS;
}
 
