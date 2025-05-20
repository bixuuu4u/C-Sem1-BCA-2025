#include <stdio.h>
float celTofah(int a);

int main()
{
    printf("%.2f\n", celTofah(37));
    return 0;
}
float celTofah(int a)
{
    float fah = (float)((a * 9.0 / 5) + 32);
    return fah;
}
