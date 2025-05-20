#include <stdio.h>

void hello(); // Function prototype
void gm();
void ga();
void gn();
int main()
{
    hello(); // Function call
    gm();
    ga();
    gn();

    return 0;
}

void hello() // function defeination
{
    printf("Hello World\n");
}

void gm()
{
    printf("Good morning\n");
}
void ga()
{
    printf("Good afternoon\n");
}
void gn()
{
    printf("Good night\n");
}