// Wap to find number of occurences of element in an array.

#include <stdio.h>
int occurences(int arr[], int size, int element);
int main()
{
    int arr[10] = {1, 1, 1, 2, 33, 45, 32, 22, 43, 22};
    int result = occurences(arr, 10, 1);
    printf("The number of occurences of 1 is %d.\n", result);
    result = occurences(arr, 10, 22);
    printf("The number of occurences of 22 is %d.\n", result);
    result = occurences(arr, 10, 33);
    printf("The number of occurences of 33 is %d.\n", result);
    result = occurences(arr, 10, 133);
    printf("The number of occurences of 133 is %d.\n", result);
    return 0;
}
int occurences(int arr[], int size, int element)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    return count;
}