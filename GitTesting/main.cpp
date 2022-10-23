#include "main.h"
#include "auxiliary.h"
#include <iostream>

int main()
{
    testPrint(HELLO_MESSAGE);
    testPrint(TEST_MESSAGE);

    std::cout << testAdd(42, 69) << std::endl;

    std::cout << "69 divided by 3 is " << testDivide(69, 3) << std::endl;

    return 0;
}
