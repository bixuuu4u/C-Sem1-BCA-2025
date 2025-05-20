#include <stdio.h>

int main()
{
    float num1, num2, operation;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter the operation\nChoose between 1 2 3 4\n");
    printf("\t1.Add\n\t2.Sub\n\t3.Multiply\n\t4.Divide\n");

    scanf("%f", &operation);

    if (operation == 1)
    {
        printf("The addition is %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    }
    if (operation == 2)
    {
        printf("The substraction is %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    }
    if (operation == 3)
    {
        printf("The multiplication is %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    }
    if (operation == 4)
    {
        printf("The division is %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    }
    if (operation != 1 || operation != 2 || operation != 3 || operation != 4)
    {
        printf("Error!! Please Enter 1 2 3 or 4 ");
        return 1;
    }

    return 0;
}