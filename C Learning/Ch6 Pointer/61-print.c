#include <stdio.h>

int main()
{
    int a = 7;
    int *address = &a;
    printf("Address of a is %u\n", &a);
    printf("Address of a is %d\n", address);
    printf("The value of the varibale by the help of address is %d or the second method %d\n", *address, *(&a));
    return 0;
}