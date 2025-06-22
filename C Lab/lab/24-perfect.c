//Perfect Number
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter value of n:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {

        printf("Its a perfect number");
    }
    else
        printf("Not a perfect number");
    return 0;
}
