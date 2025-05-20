//Squre root of number 
//With math function ,,with negetive restrictions
#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    float sqrtofnum;
    printf("Enter the number:: ");
    scanf(" %f", &num);

    if (num >= 0)
    {
        sqrtofnum = sqrt(num);
        printf("The squre root of the num %.2f is %.2f\n", num, sqrtofnum);
    }
    else
    {
        printf("Error!!Please enter a positive number\n");
        return 1;
    }
    return 0;
}