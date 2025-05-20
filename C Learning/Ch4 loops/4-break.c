#include <stdio.h>
int main()
{

    int i = 0;
    do
    {
        printf("%d\n", i);
        if (i == 9)// if statement is true then break
        {
            break;
        }
        i++;
    } while (i < 10);

    return 0;
}