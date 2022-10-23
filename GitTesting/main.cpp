#include "main.h"
#include "auxiliary.h"
#include <iostream>

int main()
{
    const int add1 = 42;
    const int add2 = 69;
    const int dividend = 69;
    const int divisor = 4;
    const int minuend = 51;
    const int subtrahend = 17;

    int remainder;

    testPrint(HELLO_MESSAGE);
    testPrint(TEST_MESSAGE);

    std::cout << add1 << " multiplied by " << add2 << " is " << testMultiply(add1, add2) << std::endl;
    std::cout << dividend << " divided by " << divisor << " is " << testDivide(dividend, divisor, &remainder) << std::endl;
    std::cout << "\tthe remainder is " << remainder << std::endl;
    std::cout << minuend << " minus " << subtrahend << " is " << testSubtract(minuend, subtrahend) << std::endl;

    return 0;
}
