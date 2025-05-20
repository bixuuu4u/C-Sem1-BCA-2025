// Wap to find the maximum and minimum element in an array
#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nThe Value of max is :%d,Min is :%d", max, min);
    return 0;
}