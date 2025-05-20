#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter first num :");
    scanf(" %d", &num1);
    printf("Enter second num :");
    scanf(" %d", &num2);
    printf("Sum of %d and %d is %d\n", num1, num2, num1 + num2);
    // OR
    sum = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2, sum);

    return 0;
}