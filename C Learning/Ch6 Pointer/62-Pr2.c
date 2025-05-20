#include <stdio.h>
void pass(int x);
int main()
{
    int a = 6;
    int *ptr;
    ptr = &a;
    printf("The value of a in main is %d\n", a);

    printf("The address of a is %u\n", ptr);
    pass(a);
    return 0;
}
void pass(int x)
{
    printf("The value of a in fuction is %d\n", x);
    printf("The address of a in function is %u\n", &x);
}