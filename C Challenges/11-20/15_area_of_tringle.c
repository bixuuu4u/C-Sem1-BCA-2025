// Wap to calculate area of the tringle

#include <stdio.h>

int main()
{
    int height, base;
    printf("Please,enter base:");
    scanf("%d", &base);
    printf("Please,enter height:");
    scanf("%d", &height);
    printf("The area of tringle is %.2fsqunit", 0.5 * base * height);

    return 0;
}