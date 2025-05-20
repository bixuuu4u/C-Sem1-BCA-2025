#include <stdio.h>
float avarage(int x, int y, int z);
int main()
{

    int a, b, c;
    printf("Enter the values of a b c\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d \n", a, b, c);

    printf("The avarage of %d %d %d is %.2f\n", a, b, c, avarage(a, b, c));
    return 0;
}
float avarage(int x, int y, int z)
{
    float avg3 = (float)(x + y + z) / 3; // type casted to float because int / int is always int and this int is given to avg3
    return avg3;
}
