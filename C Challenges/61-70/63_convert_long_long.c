// Wap that converts a large number of kilometeres ot miles, using long or long long to store the distance.
#include <stdio.h>

int main()
{
    const float MILE_KM = 0.621371;
    long kms;
    printf("Distance Converter\n");
    printf("\nPLease enter the kms:");
    scanf("%ld", &kms);
    long miles = kms * MILE_KM;
    printf("\nThe numbers of miles are %ld", miles);
    return 0;
}