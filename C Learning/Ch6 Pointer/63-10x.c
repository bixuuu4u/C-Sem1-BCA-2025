#include <stdio.h>
void x10(int *x);
int main()
{
    int a = 5;
    printf("A::%d\n", a);
    printf("Add of a:: %u\n", &a);
    x10(&a);
    printf("x10A::%d\n", a);
    return 0;
}
void x10(int *x)

{

    printf("Add of a in function:: %u\n", &x);

    printf("value of a in function  %d \n", *x);
    *x = (*x) * 10;
}