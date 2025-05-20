// PASS EACH SUB WITH ABOVE 33 MARKS AND SCORE MORE THAN 40 TO PASS

#include <stdio.h>
int main()
{
    double phy, chem, math;
    printf("Marks scored in Physics::");
    scanf("%lf", &phy);
    printf("Marks scored in Chemistry::");
    scanf("%lf", &chem);
    printf("Marks scored in Physics::");
    scanf("%lf", &math);
    double total = (phy + chem + math) / 3;
    //   printf("%lf",total);
    if (phy > 33 && chem > 33 && math > 33 && total > 40)
    {
        printf("Your total score is %.2lf\n", total);
        printf("passed\n");
    }
    else
    {
        printf("Your total score is %.2lf\n", total);
        printf("failed\n");
    }
    return 0;
}