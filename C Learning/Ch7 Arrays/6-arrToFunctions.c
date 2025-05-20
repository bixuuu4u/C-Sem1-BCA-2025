#include <stdio.h>

// void printArray(int *ptr, int s)
// {
//     for (int i = 0; i < s; i++)
//     {
//         printf("The value of %dth element is %d\n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("The value of %dth element is %d\n", i + 1, ptr[i]);
    }
    ptr[3] = 9494994; // This can change the value of array in the main  function
}
int main()
{

    int array[] = {4, 3, 4, 434, 343323, 2434, 35, 45, 4, 545332};
    printArray(array, 10);
    printf("------------------\n");
    printArray(array, 10);
    return 0;
}