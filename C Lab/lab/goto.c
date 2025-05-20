#include <stdio.h>

void main()
{
    int i = 1;
    goto hi;

    printf("Hi");

hi:

    printf("%d\n", i);
    i++;
    if (i <= 1)
    {
        goto hi;
    }
}