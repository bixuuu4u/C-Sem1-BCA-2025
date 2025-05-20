// Create a function max that takes two float arguments and returns the larger value

#include <stdio.h>
float max(float, float);
int main()
{
    float num1, num2;
    printf("Please enter a number:");
    scanf("%f", &num1);
    printf("now,enter a number:");
    scanf("%f", &num2);
    printf("\n%.2f is the largest float.", max(num1, num2));

    return 0;
}
float max(float a, float b)
{
    return a > b ? a : b;
}