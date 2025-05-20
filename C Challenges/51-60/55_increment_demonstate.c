// Demonstate with a function increment that the original integer passed to it does not change after incrementing it inside the function
// Call By VALUE
#include <stdio.h>
void increment(int);
int main()
{
    int num;
    printf("Please enter a number:");
    scanf("%d", &num);
    printf("\nBefore:Value of num is %d", num);
    increment(num);
    printf("\nAfter:Value of num is %d", num);
    return 0;
}
void increment(int a)
{
    printf("\nIn Function Before:Value of num is %d", a);
    a++;
    printf("\nIn Function After:Value of num is %d", a);
}