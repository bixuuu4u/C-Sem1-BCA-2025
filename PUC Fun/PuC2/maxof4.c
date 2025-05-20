//Greatest among four using ternary or conditional operator
#include <stdio.h>

int main()
{
    int a, b, c, d, max;
    printf("Enter four integers:: ");
    scanf(" %d %d %d %d", &a, &b, &c, &d);

    max = (a > b && a > c && a > d) ? a : (b > c && b > d) ? b : (c > d) ? c: d;
    printf("Greatest among %d %d %d %d is %d", a, b, c, d, max);

    return 0;
}