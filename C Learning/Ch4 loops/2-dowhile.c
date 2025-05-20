#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // do
    // {
    //     printf("%d\n", a);
    //     a++;
    // } while (a < 10);

    // Progrm to write in reverse order for  n natural number

    do
    {
        printf("%d\n", n);
        n--;
    } while (n);
    return 0;
}