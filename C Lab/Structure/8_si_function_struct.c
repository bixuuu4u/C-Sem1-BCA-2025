#include <stdio.h>

struct intrest
{
    float p, r, t;
};
float calculate_i(struct intrest x)
{
    return (x.p * x.r * x.t) / (100 * 365);
}
int main()
{
    struct intrest si;
    printf("\nEnter P R T(IN Days)\n");
    scanf("%f %f %f", &si.p, &si.r, &si.t);

    printf(" \nSimple Intrest= %.2f", calculate_i(si));
    return 0;
}