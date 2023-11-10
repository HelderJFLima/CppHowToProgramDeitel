// Fig. 2.5: fig02_05.cpp
// Addition program that displays the sum of two integers.

#include <iostream>

int main()
{
    int number1, number2, sum;

    std::cout << "Enter the first integer: ";
    std::cin >> number1;

    std::cout << "Enter the second integer: ";
    std::cin >> number2;

    sum = number1 + number2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
