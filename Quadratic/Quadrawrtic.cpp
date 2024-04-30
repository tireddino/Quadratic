#include <iostream>
#include <cmath>

void quadratic(double a, double b, double c) 
{
    double x1, x2;
    double squareroot;

    squareroot = pow(b, 2) - 4 * a * c;
    x1 = (- b + sqrt(squareroot)) / (2 * a);
    x2 = (-b - sqrt(squareroot)) / (2 * a);

    std::cout << "The Value of x1 is:                 ->  " << x1 << std::endl;
    std::cout << "The Value of x2 is:                 ->  " << x2 << std::endl;

    std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";

    int check1, check2;
    check1 = a * pow(x1, 2) + b * x1 + c;
    check2 = a * pow(x2, 2) + b * x2 + c;

    std::cout << "Checking: " << std::endl;
    std::cout << "The value of " << x1 << " has an output of: " << check1 << std::endl;
    std::cout << "The value of " << x2 << " has an output of: " << check2 << std::endl;
}

int main()
{
    float a, b, c;
    std::cout << "           Quadrawrtic Formula!\n";

    std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";

    std::cout << "Enter the value of a:               ->  ", std::cin >> a;
    std::cout << "Enter the value of b:               ->  ", std::cin >> b;
    std::cout << "Enter the value of c:               ->  ", std::cin >> c;

    std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";

    quadratic(a, b, c);

    std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    
    return 0;
}