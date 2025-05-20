// Wap to verify a number is palindrome
#include <stdio.h>
int main()
{
    int num;
    printf("Welcome To Palindrome number finder.\n");
    printf("Please enter a number:");
    scanf("%d", &num);
    int rev = 0, copy = num;
    while (copy > 0)
    {
        rev = rev * 10 + copy % 10;
        copy /= 10;
    }
    if (num == rev)
    {
        printf("%d is a palindrome.\n", num);
    }
    else
    {
        printf("%d is not a palindrome.\n", num);
    }
}