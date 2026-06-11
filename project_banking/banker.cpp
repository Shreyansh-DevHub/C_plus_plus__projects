#include<iostream>
#include<iomanip>

void showBalance(double balance);
double deposit();
double showWithdraw(double balance);

int main(){

    int choice;
    double balance = 0;
    do{

        std::cout << "**********************\n";
        std::cout << "welcome to banking app\n";
        std::cout << "**********************\n";
        std::cout << "Enter your choice\n";
        std::cout << "1. check balance\n";
        std::cout << "2. deposit amount\n";
        std::cout << "3. withdraw amount\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                showBalance(balance);
                break;
        case 3: balance -= showWithdraw(balance);
                showBalance(balance);
                break;
        case 4: std::cout << "thanks for visiting\n";
                break;

        default:std::cout << "invalid option\n";

        }
    }while(choice != 4);


    return 0;

}

void showBalance(double balance){
    std::cout << "your current balance is " << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit(){
    double amount = 0;
    std::cout << "enter amount to deposit ";
    std::cin >> amount;


    if(amount < 0){
        std::cout << "invalid input\n";
        return 0;
    }
    else{
    return amount;
        }
}

double showWithdraw(double balance){
    double amount = 0;
    std::cout << "enter amount to withdraw\n";
    std::cin >> amount;



    if(amount <=0){
        std::cout << "invalid amount\n";
        return 0;
    }
    else if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    }
    else{
    return amount;
    }

}