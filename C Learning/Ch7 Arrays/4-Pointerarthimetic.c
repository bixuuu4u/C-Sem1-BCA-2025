#include <stdio.h>

int main()
{
    int i = 4;
    int *ptr = &i;

    printf("address of i or value of ptr  is ::%u \n", ptr);
    // ptr++;
    ptr = ptr + 1; // size of int in your system is added
    printf("address of i or value of ptr  is ::%u \n", ptr);

    return 0;
}