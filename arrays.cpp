#include <iostream>

int main()
{
    int arr[50000] = {5, 2, -10, 5};

    printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);


    printf("Size of integer in this compiler is %u\n", sizeof(int));
    for(int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
        printf("Address arr[%d] is %p\n", i, &arr[i]);
    }

    return 0;
}