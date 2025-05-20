// Wap to declare a pointer to a char and use it to read and print a ccharacter entereed by the user

#include <stdio.h>

int main()
{
    char ch;
    char *ptr = &ch;
    printf("PLease enter a charracter:");
    scanf("%c", ptr);
    printf("\nValue of character is:%c", ch);
    printf("\nValue of character is:%c", *ptr);

    return 0;
}