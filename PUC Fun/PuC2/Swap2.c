/*Swap two numbers using 3rd varible*/
#include <stdio.h>

int main()
{
    int a, b, temporary_variable;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Before swap a=%d , b=%d\n", a, b);

    temporary_variable = b;
    b = a;
    a = temporary_variable;
    printf("After swap a=%d , b=%d\n", a, b);

    return 0;
}