/*To find factorial using for loop*/

#include <stdio.h>

int main()
{
    int value, i = 1;
    unsigned long long factorial = 1;

    printf("Enter a value:: ");
    scanf("%d", &value);

    if (value < 0)
    {
        printf("Factorial of negetive number doesnt exist\nError");
        return 1;
    }
    else
    {
        for (i = 1; i <= value; ++i)
        {
            factorial = factorial * i;
        }
    }
    printf("Factoral of number %d is %llu\n", value, factorial);
    return 0;
}












 // do
        // {
        //     factorial *= i;
        //     ++i;
        // } while (i <= value);