#include <stdio.h>
int main()
{
    // 97 to 122 is lower case ASCII
    char c;
    printf("Enter your character:");
    scanf("%c", &c);

    if (c >= 97 && c <= 122)
    {
        printf("The character %c is lower case", c);
    }
    else
    {
        printf("The character %c is not lower case or maybe a special character", c);
    }
    return 0;
}