#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size :");
    scanf("%d ", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d :", i);
        scanf("%d ", arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=%d", i, arr[i]);
    }

    return 0;
}