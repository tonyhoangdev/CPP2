#include <iostream>

int &func() {
    static int x = 12;
    return x;
}

int func2(int &x) {
    return x;
}

void swap2(char * str1, char * str2) {
    char *temp = str1;
    str1 = str2;
    str2 = temp;
}

int main()
{
    std::cout << "Hello Tony" << std::endl;

    int x = 10;

    int &ref = x;
    ref = 20;
    std::cout << "x = " << x << std::endl;

    x = 30;
    std::cout << "x = " << x << std::endl;
    std::cout << "ref = " << ref << std::endl;

    func() = 43;
    std::cout << func() << std::endl;
    
    int x1 = 10;
    std::cout << func2(x1) << std::endl;


    char *str1 = "Hello";
    char *str2 = "tony";
    swap2(&str1[0], &str2[0]);

    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;

    // todo:
    int *ptr1 = NULL;
    int &ref1 = *ptr1;
    std::cout << ref1;
    
    return 0;
}