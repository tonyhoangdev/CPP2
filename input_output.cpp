#include <iostream>

int main() {
    char sample[] = "Tony Hoang";
    std::cout << sample << " - Handsome" << std::endl;

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age is: " << age << std::endl;

    std::cerr << "An error occured" << std::endl;

    std::clog << "An error occured" << std::endl;
    
    return 0;
}