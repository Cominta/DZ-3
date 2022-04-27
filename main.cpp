#include <iostream>
#include <math.h>

int main()
{
    // 1
    // float a;
    // float b;

    // std::cout << "\nax + b = 0\n\n";

    // std::cout << "Enter a: ";
    // std::cin >> a;

    // std::cout << "Enter b: ";
    // std::cin >> b;

    // std::cout << "x = " << -(b / a) << "\n";

    // 2
    // int num;
    // int degree;

    // std::cout << "\nEnter number: ";
    // std::cin >> num;

    // std::cout << "Enter degree: ";
    // std::cin >> degree;

    // std::cout << "\nResult: " << pow(num, degree) << "\n";

    // 3
    // int degrees;

    // std::cout << "\nEnter degrees: ";
    // std::cin >> degrees;

    // std::cout << "\nFahrenheit: " << degrees * 1.8000 + 32 << "\n";
    // std::cout << "Kelvin: " << degrees + 273.15 << "\n";
    // std::cout << "Reaumur: " << degrees * 0.8 << "\n";
    // std::cout << "Delilya: " << degrees * 1.5000 - 100 << "\n";

    // 4
    int a = 1;
    int b = 2;

    std::cout << "\n1.1. a = " << a << ", b = " << b << "\n";

    int c = a;
    a = b; 
    b = c;

    std::cout << "1.2. a = " << a << ", b = " << b << "\n\n";

    a = 2;
    b = 3;

    std::cout << "2.1. a = " << a << ", b = " << b << "\n";
    
    std::swap(a, b);

    std::cout << "2.2. a = " << a << ", b = " << b << "\n\n";

    return 0;
}