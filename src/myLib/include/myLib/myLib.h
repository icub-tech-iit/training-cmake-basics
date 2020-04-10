#pragma once
/**
 * \ingroup myLib_namespace
 *
 * myLib namespace.
 */
namespace myLib {

/**
 * @class myLib::summationClass
 * @headerfile myLib.h <myLib/myLib.h>
 *
 * @brief A class from myLib namespace.
 *
 * This class does a summation.
 */
class summationClass
{
public:
    /**
     * Constructor
     */
    summationClass();

    /**
     * Destructor
     */
    virtual ~summationClass();

    /**
     * A method that does a summation
     */
    virtual double doSomething(double op1, double op2);
};


/**
 * @class myLib::differenceClass
 * @headerfile myLib.h <myLib/myLib.h>
 *
 * @brief A derived class from myLib namespace.
 *
 * This class performs a difference.
 */
class differenceClass : public summationClass
{
public:
    /**
     * Constructor
     */
    differenceClass();

    /**
     * Destructor
     */
    virtual ~differenceClass();

    /**
     * A method that does something
     */
    virtual double doSomething(double op1, double op2);
};


} // namespace myLib

