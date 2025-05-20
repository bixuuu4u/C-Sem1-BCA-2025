#include <stdio.h>
int main()
{
    int num1, num2, temporary;

    printf("Enter two values : ");
    scanf(" %d %d", &num1, &num2);

    printf("Before swap num1= %d num2 =%d\n", num1, num2);

    temporary = num1;
    num1 = num2;
    num2 = temporary;

    printf("After swap num1= %d num2 =%d\n", num1, num2);

    return 0;
}