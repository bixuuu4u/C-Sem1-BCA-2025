#include <stdio.h>

int main()
{

    int i = 3, j = 4;
    printf("The value of 3 * i - 5 * j is %d\n", 3 * i - 5 * j); // why it is not 3*  i-5*j Here no BODMAS is applied
    printf("The value of 5 * j / 3 * i is %d\n", 5 * j / 3 * i);
}