// Wap to change the value of an integer variable using a pointer and the * operator

#include <stdio.h>

int main()
{
    int num = 5;
    printf("\nValue of num is:%d", num);
    int *ptr = &num;
    *ptr = 7;
    printf("\nValue of num is:%d", num);
    return 0;
}