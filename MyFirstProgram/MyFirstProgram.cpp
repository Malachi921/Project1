#include <iostream>
using namespace std;

int main() {
    int myInt = 42;
    float myFloat = 3.14;
    double myDouble = 2.71828;
    char myChar = 'c';
    bool myBool = true;
    std::string myString = "Hello, World!";

    std::cout << "Integer:" << myInt <<  std::endl;
    std::cout << "Float:" << myFloat <<  std::endl;
    std::cout << "Double:" << myDouble << std::endl;
    std::cout << "Character:" << myChar << std::endl;
    std::cout << "Boolean:" << myBool << std::endl;
    std::cout << "string:" << myString << std::endl;

    return 0;
}