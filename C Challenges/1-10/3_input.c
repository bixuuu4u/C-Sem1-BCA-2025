// Wap to input name of person and respond with "Welcome {Name} to C Programming"
#include <stdio.h>

int main()
{
    char name[30];
    printf("Hey! Please enter your name :");
    scanf(" %29s", name);
    // User cant write more than 29char 1 reserved for NULL '\0'
    printf("Welcome %s to C Programming.", name);
    return 0;
}