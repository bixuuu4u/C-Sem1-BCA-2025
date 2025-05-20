// Express step by step evalutaion of 3*x/y-z+R

#include <stdio.h>
int main()
{
    int x = 2, y = 3, z = 3, R = 1, result = 3 * x / y - z + R;
    // Step     * / % same priority so 3 * x / y left to right  - z+R

    // 3*2/3     -3+1
    // 6/3   - 3 + 1
    // 2 - 3 + 1 = 0

    printf("The value of 3 * x / y - z + R is %d", result);
    return 0;
}