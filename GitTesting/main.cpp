#include "main.h"
#include "auxiliary.h"
#include <iostream>

int main()
{
    testPrint(HELLO_MESSAGE);
    testPrint(TEST_MESSAGE);

    std::cout << "42 plus 69 is " << testAdd(42, 69) << std::endl;

    return 0;
}
