#include <stdio.h>
int main()
{

    int arrsize, temp;
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

    for (int i = 0; i < arrsize - 1; i++)
    {
        for (int j = 0; j < arrsize - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < arrsize; i++)
    {
        printf(" \n%d", arr[i]);
    }

    return 0;
}