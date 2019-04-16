#include <iostream>

int main() {
    std::cout << "Invalid_range" << std::endl;
#if 0
    // problem with char
    for (char a = 0; a <= 255; a++) {
        //std::cout << a;
    }

    // problem with bool
    for (bool a = 1; a <= 5; a++) {
        //std::cout << a;
    }

    // problem with 'short'
    for (short a = 32767; a < 32770; a++) {
        std::cout << a <<  std::endl;
    }
    
    // problem with 'unsigned short'
    for (unsigned short a = 65532; a < 65536; a++) {
        std::cout << a << std::endl;
    }
#endif


    return 0;
}