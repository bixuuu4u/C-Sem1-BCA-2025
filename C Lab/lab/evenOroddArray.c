#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size :");
    scanf(" %d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d :", i);
        scanf(" %d", &arr[i]);
    }
    printf("Even Numbers Are: \n");
    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 == 0)
        {
            printf("arr[%d]=%d \n", i, arr[i]);
        }
    }
    printf("Odd Numbers Are: \n");
    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 != 0)
        {
            printf("arr[%d]=%d \n", i, arr[i]);
        }
    }
    return 0;
}