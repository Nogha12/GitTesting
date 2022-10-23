#include "main.h"
#include "auxiliary.h"
#include <iostream>

int main()
{
    int remainder;

    testPrint(HELLO_MESSAGE);
    testPrint(TEST_MESSAGE);

    std::cout << "42 plus 69 is " << testAdd(42, 69) << std::endl;

    std::cout << "69 divided by 3 is " << testDivide(69, 3, &remainder) << std::endl;
    std::cout << "\tthe remainder is " << remainder << std::endl;

    return 0;
}
