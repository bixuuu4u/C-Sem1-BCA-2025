#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    num < 0 ? printf("The number %d is negetive", num) : num > 0 ? printf("The number %d is positive", num)
                                                                 : printf("The number is  %d ", num);

    return 0;
}