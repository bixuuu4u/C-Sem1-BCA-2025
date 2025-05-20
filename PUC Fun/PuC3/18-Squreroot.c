#include <stdio.h>
#include <math.h>
int main()
{
    float num, squreroot;
    printf("Enter a numeber :");
    scanf(" %f", &num);

    squreroot = sqrt(num);
    printf("Squreroot of %0.2f is %0.2f", num, squreroot);
    return 0;
}
