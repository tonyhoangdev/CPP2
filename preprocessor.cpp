#include <iostream>
#include <stdio.h>

void func1() __attribute__((constructor));
void func2() __attribute__((destructor));

#pragma startup func1
#pragma exit func2

// #pragma warn - rvl
// #pragma warn - par
// #pragma warn - rch

void func1()  {
    printf("Inside func1() \n");
}

void func2() {
    printf("Inside func2() \n");
}

// macro definition
#define LIMIT 5
// macro definition with parameter
#define AREA(a, b) ((a) * (b))

int main() {
    std::cout << "preprocessor" << std::endl;

    for(int i = 0; i < LIMIT; i++) {
        std::cout << i << std::endl;
    }

    std::cout << "Area of rectangle is: " << AREA(3, 6) << std::endl;

    return 0;
}