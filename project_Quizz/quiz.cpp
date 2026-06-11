#include<iostream>

int main(){
    

    std::string questions[] = {"what year was c++ created?",
                                "who invented c++?",
                                "who is predecessor of c++?",
                                "is the earth flat?"};

    std::string options[][4] = {{"A. 1965" , "B. 1975" , "C. 1985" , "D. 1995"},
                               {"A. NEIL ARMSTRONG" , "B. Bjarne Stroustrup" , "C. John Cena" , "D. portalceller500"},
                               {"A. C" , "B. C+" , "C. C--" , "D. B++"},
                               {"A. yes" , "B. no " , "C. sometimes" , "D. whats earth"}};
    

    char answerkey[] = {'C' , 'B' , 'A' , 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char score;
    char guess;
    for(int i = 0 ; i < size ; i++){
        std::cout << "******************\n";
        std::cout << questions[i] << "\n";
        std::cout << "******************\n";


        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]) ; j++){
            std::cout << options[i][j] << "\n";
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerkey[i]){
            std::cout << "correct\n";
            score++;}
        else{
            std::cout << "wrong answer\n";
            std::cout << "answer was " << answerkey[i] << "\n";
        }

        
    }



    return 0;
}