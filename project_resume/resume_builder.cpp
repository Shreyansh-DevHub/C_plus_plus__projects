#include <iostream>
#include <limits>

using namespace std;

int main(){
    std::string name;
    int age;
    std::string hobbies;
    std::string degree;
    std::string project;
    int no;

    std::cout << "lets build your resume\n";



    std::cout << "whats your name\n";
    std::getline(std::cin >> std::ws , name);



    std::cout << "whats your age\n";
    std::cin >> age;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    std::cout << "Enter your projects your worked on\n";
    std::getline(std::cin >> std::ws , project);


    std::cout << "enter your degrees\n";
    std::getline(std::cin >> std::ws , degree);


    std::cout << "what are your hobbies\n";
    std::getline(std::cin >> std::ws , hobbies);



    std::cout << "enter your phone number.\n";
    std::cin >> no;

    std::cout << "------------------here is your resume------------------\n";
    std::cout << "--> NAME : " << name << "\n";
    std::cout << "--> AGE : " << age << "\n";
    std::cout << "--> HOBBIES : " << hobbies << "\n";
    std::cout << "--> DEGREE : " << degree << "\n";
    std::cout << "--> PROJECTS : " << project << "\n";
    std::cout << "--> CONTACT NO. : " << no << "\n";
    std::cout << "--------------------------------------------------------";





    return 0;
}