#include <stdio.h>
struct intrest
{
    float p, r, t;
};
int main()
{
    struct intrest si;
    printf("\nEnter P R T(IN Days)\n");
    scanf("%f %f %f", &si.p, &si.r, &si.t);
    float i = (si.p * si.r * si.t) / (100 * 365);
    printf(" \nSimple Intrest= %.2f", i);
    return 0;
}