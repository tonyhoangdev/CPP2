#include <iostream>

int main()
{
    std::cout << "Hello Tony" << std::endl;

    int x = 5;
    int *ptr;
    ptr = &x;
    printf("value of x = %d\n", *ptr);
    printf("address of x = %p\n", ptr);
    printf("address of ptr = %p\n", &ptr);

    *ptr = 20;
    printf("*ptr = 20: %d\n", *ptr);

    // express and arithmetic
    int arr[3] = {10, 100, 200};
    ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("value of *ptr = %d\n", *ptr);
        printf("value of ptr = %p\n\n", ptr);

        ptr++;
    }

    return 0;
}