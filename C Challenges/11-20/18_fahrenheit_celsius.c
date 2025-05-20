// Wap to convert fahrenheit to celsius
// C=(F-32)* 5/9

#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temprature in fahrenheit:");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("The temprature in Celsius is %.2f", c);

    return 0;
}