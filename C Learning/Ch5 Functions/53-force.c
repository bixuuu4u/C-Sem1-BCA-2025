#include <stdio.h>
float force(int m);

int main()
{
    float mass = 0;
    printf("Enter your mass in kgs\n");
    scanf("%f", &mass);
    printf("Applied force on body of mass %.2f kgs is %.2f Newton\n", mass, force(mass));
    return 0;
}

float force(int m)
{
    return m * 9.8;
}
