#include <stdio.h>

int main()
{
    int num, num_, reverse = 0, remainder;

    printf("Enter a number..2 or more digits recomanded: ");
    scanf("%d", &num);
    num_ = num;
    while (num != 0)
    {
        remainder = num % 10;
        
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("The original number is ::%d\nThe reversed number is ::%d", num_, reverse);

    return 0;
}