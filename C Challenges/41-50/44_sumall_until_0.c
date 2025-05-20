// Wap that calculagtes the sum of all numbers entered by user until ennters 0.
// then sum should be displayed

#include <stdio.h>

int main()
{
    int num, sum = 0;
    do
    {
        printf("Please enter a number:");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);
    printf("\nTotal Sum is %d", sum);
    return 0;
}