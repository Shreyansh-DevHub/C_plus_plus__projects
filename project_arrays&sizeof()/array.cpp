#include<iostream>

int main(){

    std::string student[] = {"student1" , "student2" , "student3" , "student4"};


    
    for(int i = 0 ; i < sizeof(student)/sizeof(std::string) ; i++){
        std::cout << student[i] << "\n";
    }



    //better operation will be
    for(std::string students : student){
        std::cout << students << "\n";
    }
    return 0;
}