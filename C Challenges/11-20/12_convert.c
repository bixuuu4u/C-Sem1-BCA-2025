// Given an integer value,convert it to a floting point value and print both
#include <stdio.h>

int main()
{
    int a;
    printf("Please Enter a int num:");
    scanf("%d", &a);
    float f = a;
    printf("Original number is :%d", a);
    printf("\nfloat converted is :%f", f);
    printf("\nfloat converted is :%f", (float)a);
    return 0;
}