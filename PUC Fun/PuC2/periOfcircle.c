/*PErimeter of circle ,Constant PI and user values*/
#include <stdio.h>
#define PI 3.142857142857143
int main()
{
    float radius, p;

    printf("Enter radius of circle:");
    scanf(" %f", &radius);

    p = PI * radius * 2;

    printf("PErimeter of the circle is %0.3f\n", p);
    return 0;
}