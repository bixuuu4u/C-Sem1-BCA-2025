#include <stdio.h>
int main()
{
    int array[5];

    for (int i = 0; i <= 4; i++)
    {
        printf(" Enter value %d :", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("The value of number  %d is %d \n", i, array[i]);
    }

    return 0;
}                                                   