// Wap using recurion to check if a number is a palindrome

#include <stdio.h>
int reverse(int num, int rev);
int main()
{
    int number;
    printf("\nWelcome TO palindrome checker\n");
    printf("Please enter the number:");
    scanf("%d", &number);
    int rev = reverse(number, 0);
    if (number == rev)
    {
        printf("\n%d is palinrome.", number);
    }
    else
    {
        printf("\n%d is not palinrome.", number);
    }
    return 0;
}

int reverse(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    return reverse(num / 10, rev * 10 + num % 10);
}