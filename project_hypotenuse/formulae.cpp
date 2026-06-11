#include <iostream>
#include <cmath>

int main() {
    double a, b , c;
    std::cout << "Enter the height of the right triangle: ";   
    std::cin >> a;
    std::cout << "Enter the base of the right triangle: ";
    std::cin >> b;
    a = pow(a , 2);
    b = pow(b , 2);
    c = sqrt(a + b);

    std::cout << "the hypotenuse of the triangle is " << c;
  

    return 0;
}