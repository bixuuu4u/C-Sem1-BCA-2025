#include <stdio.h>
int main()
{

    int arrsize;
    printf("Enter array size : ");
    scanf(" %d", &arrsize);

    int arr[arrsize];

    printf("Enter elemens of array \n");
    for (int i = 0; i < arrsize; i++)
    {
        printf("Enter %d element :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < arrsize; i++)
    {
        printf(" %d", arr[i]);
    }
    int start = 0, temp, end = arrsize - 1;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < arrsize; i++)
    {
        printf(" \n%d", arr[i]);
    }

    return 0;
}