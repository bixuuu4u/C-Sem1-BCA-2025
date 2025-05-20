#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter two numubers :");
    scanf(" %d %d %d", &num1, &num2, &num3);

    num1 > num2 &&num1 > num3 ? printf("%d is greater", num1) : num2 > num3 ? printf("%d is greater", num2)
                                                                            : printf("%d is greater", num3);
    return 0;
}