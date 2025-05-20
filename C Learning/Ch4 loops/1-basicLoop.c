//WHENEVER //BREAK// IS ENCOUNTERED INSIDE THE LOOP THE CONTROL IS SENT OUTSIDE THE LOOP
#include <stdio.h>
int main()
{
    int a = 1;
    // Loops are used to repeat similar part of a code
    // printf: "%d\n", a

    // printf("%d", a);
    // a++;
    // printf("%d", a);
    // a++;
    // printf("%d", a);
    // a++;
    // printf("%d", a);
    // a++;
    // printf("%d", a);
    // a++;
    int i = 1;

    // infinite loop
    // while (i >= 1)
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}