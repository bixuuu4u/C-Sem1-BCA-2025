// CONTINUE STATEMENT IS USED TO IMMIDEATELY MOVE TO THE NEXT ITERATION OF THE LOOP

#include <stdio.h>
int main()
{
    // printf("Hello");
    int skip = 5;
    int i = 0;
    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            i++;
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}