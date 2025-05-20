#include <stdio.h>
int main()
{
    int a = 3;
    printf("%d %d %d\n", a, ++a, a++);
    // GCC  Right to left
    // Ask them what is the behaviour of the compiler
    // left to right or right to lefts
    return 0;
}