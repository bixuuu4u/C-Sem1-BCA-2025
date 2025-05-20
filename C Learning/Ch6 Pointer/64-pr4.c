// PROGRAM THAT CALCULATES SUM AND AVARAGE USING FUNCTION
// HOW CAN I RETURN TWO VALUES
// USE pointeers

#include <stdio.h>
void sumAndavg(int x, int y, int *sum, double *avg)
{
    *sum = x + y;
    *avg = *sum / 2.0;
}
int main()
{
    int a = 4, b = 7, sum;
    double avg;
    sumAndavg(a, b, &sum, &avg);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}