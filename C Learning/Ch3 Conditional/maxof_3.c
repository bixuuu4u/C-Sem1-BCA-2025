//Greatest among 3 using conditional
#include <stdio.h>

int main()
{
    int x, y, z, max;

    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &x, &y, &z);

    max = (x > y && x > z) ? x : (y > z) ? y : z;
                                        
    printf("Max number is %d\n", max);
    return 0;
}