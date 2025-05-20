// Wap to find the sum of average of all elements in an array
#include <stdio.h>
int add(int arr[], int size);
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = add(arr, 10);
    float avg = sum / 10.0;
    printf("The sum of numbers is %d and avreage is %.2f", sum, avg);
    return 0;
}
int add(int arr[], int size)
{
    int add = 0;
    for (int i = 0; i < size; i++)
    {
        add += arr[i];
    }
    return add;
}