#include "main.h"
#include "auxiliary.h"
#include <iostream>

int main()
{
    const int add1 = 19;
    const int add2 = 78;
    const int dividend = 69;
    const int divisor = 4;

    int remainder;

    testPrint(HELLO_MESSAGE);
    testPrint(TEST_MESSAGE);

    std::cout << add1 << " plus " << add2 << " is " << testAdd(add1, add2) << std::endl;
    std::cout << dividend << " divided by " << divisor << " is " << testDivide(dividend, divisor, &remainder) << std::endl;
    std::cout << "\tthe remainder is " << remainder << std::endl;

    return 0;
}
