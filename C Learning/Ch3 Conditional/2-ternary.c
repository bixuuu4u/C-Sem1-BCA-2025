#include <stdio.h>
int main()
{
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    //CONDITION? TRUE : FALSE;
    //ONE LINER NOT MUCH RECOMANDED
    (a % 2 == 0) ? printf("a is even") : printf("a is odd");
    return 0;
}