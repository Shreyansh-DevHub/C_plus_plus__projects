#include <iostream>
#include <ctime>


int main(){
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout << "---------number guessing game---------\n";

    do{
        std::cout << "guess a number\n";
        std::cin >> guess;
        tries ++;

        if(guess > num){
            std::cout << "number too high\n";
        }
        else if(guess < num){
            std::cout << "number too low\n";
        }
        else{
            std::cout << "you guessed the correct number in " << tries << " TRIES\n";
        }
    }while(guess != num);



    std::cout << "----------------------";

    







    return 0;
}