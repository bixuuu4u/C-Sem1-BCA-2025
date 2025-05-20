// Wap to declare one variable of each data type and prints heir data types using sizeof()

#include <stdio.h>
int main()
{
    int a = 5;
    float b = 7.5;
    double c = 4.4344444444444;
    char d = 'A';
    printf("Size of int a:%dbytes\n", sizeof(int));
    printf("Size of float b:%dbytes\n", sizeof(float));
    printf("Size of double c:%dbytes\n", sizeof(c));
    printf("Size of char d:%dbytes", sizeof(d));
    return 0;
}