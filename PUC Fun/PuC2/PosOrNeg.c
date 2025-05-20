//Posiitve of Negetive using ternary or conditoional
#include <stdio.h>

int main()
{
    int a;

    printf("Enter a integer:");
    scanf(" %d", &a);

    (a == 0) ? 
    printf("The integer %d is zero", a) 
    : (a < 0) ?
     printf("The integer %d is negative", a)
    : printf("The integer %d is positive", a);

    return 0;
}