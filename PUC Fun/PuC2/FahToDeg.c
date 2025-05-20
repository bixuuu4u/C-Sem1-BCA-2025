/*To convert fahranite to degree */
#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter temperature in fahrenhite::  ");
    scanf(" %f", &f);

    c = (f - 32) * (5.0 / 9.0);
    printf("The temprature in celcius is %0.2f\n", c);

    return 0;
}