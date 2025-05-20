// Wap to print area of a square by inputting its side length
#include <stdio.h>

int main()
{
    float side;
    printf("Enter the length of a side of sqaure: ");
    scanf("%f", &side);
    printf("Area:%.2fsqunit", side * side);
    return 0;
}