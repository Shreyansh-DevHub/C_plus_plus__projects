#include <iostream>
// luhn algorithm
int getdigit(const int number);
int getevensum(const std::string cardnumber);
int getoddsum(const std::string cardnumber);


int main(){
    std::string cardnumber ;
    int result = 0;

    std::cout << "enter your cradit card for validation\n";
    std::cin >> cardnumber;

    result = getevensum(cardnumber) + getoddsum(cardnumber);


    if(result % 10 == 0){
        std::cout << "your credit card is valid";
    }
    else{
        std::cout << "your credit card is invalid";
    }

    return 0;
}


int getdigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int getevensum(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 2; i >=0 ; i -= 2 ){
        sum += getdigit((cardnumber[i] - '0') * 2);
    }
    
    return sum;
}
int getoddsum(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 1; i >=0 ; i -= 2 ){
        sum += (cardnumber[i] - '0');
    };
    return sum;
}
