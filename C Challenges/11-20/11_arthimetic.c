// Wap to take two numbers and shows result of all arthimetic operators

#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Please enter first number:");
    scanf("%f", &num1);
    printf("now, enter second number:");
    scanf("%f", &num2);
    printf("\nAdd:%.2f", num1 + num2);
    printf("\nSubstract:%.2f", num1 - num2);
    printf("\nMultiply:%.2f", num1 * num2);
    printf("\nDivide:%.2f", num1 / num2);
    printf("\nModulos:%d", (int)num1 % (int)num2);

    return 0;
}
