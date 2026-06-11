#include<iostream>
#include<ctime>

char getplayerchoice();
void showchoice(const char c);
char getcomputerchoice();
int winner(char player , char computer);



int main(){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    char player = getplayerchoice();
    char computer = getcomputerchoice();
    std::cout << "You chose: ";
    showchoice(player);
    std::cout << "\nComputer chose: ";
    showchoice(computer);
    std::cout << '\n';


    int result = winner(player, computer);
    if (result == 1) std::cout << "You win!\n";
    else if (result == 0) std::cout << "It's a draw.\n";
    else if (result == -1) std::cout << "Computer wins.\n";
    return 0;


}

int winner(char player , char computer){
    if (player == computer) return 0;
    if (player == 'r' && computer == 's') return 1;
    if (player == 'p' && computer == 'r') return 1;
    if (player == 's' && computer == 'p') return 1;
    return -1;
}
char getcomputerchoice(){
    int r = std::rand() % 3; // 0,1,2
    if (r == 0) return 'r';
    if (r == 1) return 'p';
    return 's';
}

char getplayerchoice(){

    char choice;
    std::cout <<"***********************************\n";
    std::cout <<"Welcome to rock paper scissors game\n";
    std::cout <<"***********************************\n";
    std::cout <<"choose 'r' for rock\n";
    std::cout <<"choose 'p' for paper\n";
    std::cout <<"choose 's' for scissors\n";
    std::cin >> choice;
    
    return choice ;
    
}

void showchoice(const char c){

    
    switch(c){
        case 'r': std::cout << "you choose rock";
                break;
        case 'p': std::cout << "you choose paper";
                break;
        case 's': std::cout << "you choose scissors";
                break;
        default: std::cout << "invalid choice";
                break;
    };

};