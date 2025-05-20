// Call a function get_avrage that takes five int numbers andreturns the avrage

#include <stdio.h>
float get_avrage(int, int, int, int, int);
int main()
{
    int num1, num2, num3, num4, num5;
    printf("Please enter 5 numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    printf("\nAvrage of %d %d %d %d %d is %.2f", num1, num2, num3, num4, num5, get_avrage(num1, num2, num3, num4, num5));
    return 0;
}
float get_avrage(int a1, int a2, int a3, int a4, int a5)

{
    return (a1 + a2 + a3 + a4 + a5) / 5.0;
}