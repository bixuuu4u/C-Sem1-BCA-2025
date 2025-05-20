// Wap to calculate simple intrest
#include <stdio.h>

int main()
{
    int p, r, t;
    printf("Please,enter the principle amount:");
    scanf("%d", &p);
    printf("Now,the rate:");
    scanf("%d", &r);
    printf("Now,the time(years):");
    scanf("%d", &t);
    printf("The Simple Intrest is %f", (p * t * r) / 100.0);
    return 0;
}