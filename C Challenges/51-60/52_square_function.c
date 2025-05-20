// Define a function square that takes an int and returns its square

#include <stdio.h>
int square(int);
int main()
{
    int num;
    printf("Please enter a number:");
    scanf("%d", &num);
    printf("Square is %d.", square(num));
    return 0;
}
int square(int a)
{
    return a * a;
}