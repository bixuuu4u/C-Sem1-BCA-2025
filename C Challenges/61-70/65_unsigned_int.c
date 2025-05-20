// Wap that  intializes an unsigned int to its maximum value
// And int to a negetive number add 1 to both and print the results to show
// how unsigned  int wraps around 0 whereas the int remains negetive due to overflow
#include <stdio.h>
#include <limits.h>
int main()
{
    unsigned int number = UINT_MAX;
    int normal = INT_MAX;
    printf("\nMAx Value of unsigned int: %u", number);
    printf("\nMAx Value of normal int: %d", normal);
    number++;
    normal++;
    printf("\nMAx Value of unsigned int: %u", number);
    printf("\nMAx Value of normal int: %d", normal);
    return 0;
}