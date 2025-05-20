#include <stdio.h>

int main()
{
    int a[] = {5, 6, 7};
    for (int i = 0; i < 3; i++)
    {
        printf("The value of a[%d] is %d\n", i, a[i]);
    }

    return 0;
}