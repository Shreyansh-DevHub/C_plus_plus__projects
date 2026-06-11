#include <iostream>
typedef std::string text_writing;//this is a type definition for a string variable called text_writing


using namespace std; //this is use to small up the std::cout command to cout only



int main() {

    cout << "Hello, World!" << std::endl;
    cout << "this is a test text" << std::endl;

    int x = 2;//integer 
    cout << x << std::endl;

    double y = 23.67;//decimal number

    double z = (double)x + y;//casting x to double and adding it to y
    cout << z << std::endl;

    z = z+1;//increment z by 1
    cout << z << std::endl;

    text_writing text = "this is a string variable";//string variable
    cout << text << std::endl;



    std::string name;
    int age;

    cout << "what is your age?" << std::endl;//asking the user for their age
    std::cin >> age;//getting the age input from the user

    
    cout << "what is your full name?" << std::endl;//asking the user for their full name
    std::getline(std::cin >> std::ws , name);//this is used to get the full name with spaces


    cout << "hello " << name << std::endl;
    cout << "your age is " << age << std::endl;

    return 0;

}
