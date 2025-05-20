// void minmax(int*a,int*b,int*min,int*max)
// assign the smaller value to min and larger value to max using call by refrence

#include <stdio.h>
void min_max(int *a, int *b, int *min, int *max);
int main()
{
    int num1, num2, min, max;
    printf("Please enter a number:");
    scanf("%d", &num1);
    printf("Now,enter a number:");
    scanf("%d", &num2);
    min_max(&num1, &num2, &min, &max);
    printf("\nBetween %d and %d is Min:%d,Max:%d", num1, num2, min, max);

    return 0;
}
void min_max(int *a, int *b, int *min, int *max)
{
    if (*a < *b)
    {
        *min = *a;
        *max = *b;
    }
    else
    {
        *min = *b;
        *max = *a;
    }
}