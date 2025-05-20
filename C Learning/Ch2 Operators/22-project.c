// Write a program to determine a number is divisible by 97 or not?

#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    printf("If op 0 then divisible: %d", number % 97);

    return 0;
}