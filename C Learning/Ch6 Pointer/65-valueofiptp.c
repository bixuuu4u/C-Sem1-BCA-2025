// Determine the value of i by using pointer to pointer

#include <stdio.h>

int main()
{
    int i = 6;
    int *ptr = &i; // ptr is pointer to i

    int **ptrtoptr = &ptr; // ptrtoptr is a pointer to ptr that is also a pointer to i
    printf("The value of I is %d\n", **ptrtoptr);
    return 0;
}