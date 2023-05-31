#include <iostream>

float &larger(float &a, float &b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}

int main()
{
    float temp1, temp2;

    std::cout << "Enter a temperature: ";
    std::cin >> temp1;

    std::cout << "Enter another temperature: ";
    std::cin >> temp2;

    float value;
    std::cout << "\nEnter a value: ";
    std::cin >> value;

    std::cout << "\nBefore assignment:\n";
    std::cout << "temp1 = " << temp1 << std::endl;
    std::cout << "temp2 = " << temp2 << std::endl;

    larger(temp1, temp2) = value;

    std::cout << "\nAfter assignment:\n";
    std::cout << "temp1 = " << temp1 << std::endl;
    std::cout << "temp2 = " << temp2 << std::endl;

    return 0;
}