#include <iostream>

int main(){
    double a, b, result;
    char op;

    std::cout << "-----------calculator-----------" << std::endl ;


    std::cout << "enter a opration (+,-,*,/) " << std::endl ;
    std::cin >> op;

    std::cout << "enter first number ";
    std::cin >> a;

    std::cout << "enter second number ";
    std::cin >> b;

    switch(op){
        case '+':
            result = a + b;
            std::cout << "your result is " << result << std::endl;
            break;
        case '-':
            result = a - b;
            std::cout << "your result is " << result << std::endl;
            break;
        case '*':
            result = a * b;
            std::cout << "your result is " << result << std::endl;
            break;
        case '/':
            result = a / b;
            std::cout << "your result is " << result << std::endl;
            break;
        default:
            std::cout << "invalid operator" << std::endl;

    }
    std::cout << "--------------------------------" << std::endl;

    return 0;
}
