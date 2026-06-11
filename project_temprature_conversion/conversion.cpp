#include <iostream>

int main(){
    double temp;
    char unit;


    std::cout << "----temprature converter----\n";
    std::cout << "enter 'f' for fahrenheit and 'c' for celsius\n";
    std::cin >> unit;


    if(unit == 'f' || unit == 'F'){
        std::cout << "enter temprature in celsis\n";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "your temprature is " << temp << " F\n";
    
    }
    else if(unit == 'c' || unit == 'C'){
        std::cout << "enter temprature in fahrenheit\n";
        std::cin >> temp;
        temp = (temp - 32.0)/1.8;
        std::cout << "your temprature is " << temp << " C\n";

    } 
    else{
        std::cout << "enter correct unit type\n";
    }

    std::cout << "-----------------------------";




    return 0;
}