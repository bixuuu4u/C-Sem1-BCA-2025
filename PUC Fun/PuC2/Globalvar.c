//Concept of global variable
#include <stdio.h>

void printglobal1();

int global_a = 90;

int main()
{
    // global_a = 10;

    printf("Gloabl variable is %d\n", global_a);
    printglobal1();
    return 0;
}

void printglobal1()
{
    printf("Global variable is %d", global_a);
}