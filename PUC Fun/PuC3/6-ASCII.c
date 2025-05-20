#include <stdio.h>

int main()
{
    printf("Enter a character :");
    char ch;
    scanf(" %c", &ch);
    printf("The ASCII value of %c is %d\n", ch, ch);
    //////////////////////////////////////
    printf("Enter a ASCII value :");
    int value;
    scanf(" %d", &value);
    printf("The char  of %d is %c", value, value);
    return 0;
}