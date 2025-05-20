// CALCULATE THE AREA OF THE CIRCLE AND THEN MODIFY IT TO CALCULATE VOLUME OF THE CYLINDER

#include <stdio.h>

int main()
{

    int radius, height;

    radius = 3;
    float pi = 3.147;
    height = 3;

    printf("The area of the circle is=%f\n", pi * radius * radius);
    printf("The volume of the cylinder is=%f\n", pi * radius * radius * height);

    return 0;
}