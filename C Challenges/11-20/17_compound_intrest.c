// Wap to calculate compound intrest
#include <stdio.h>
#include <math.h>
int main()
{
    int p, r, t;
    printf("Please,enter the principle amount:");
    scanf("%d", &p);
    printf("Now,the rate:");
    scanf("%d", &r);
    printf("Now,the time(years):");
    scanf("%d", &t);
    printf("The Compound Intrest is %f", p * pow((1 + r / 100.0), t));
    return 0;
}