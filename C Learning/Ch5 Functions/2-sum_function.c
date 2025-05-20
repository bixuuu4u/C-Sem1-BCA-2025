#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
//
// Function prototype declaration
int sum(int a, int b);

int main()
{
    int plus = sum(2, 6); // Function call
    printf("Sum is %d\n", plus);
    return 0;
}

int sum(int a, int b)
{
    int result = a + b;
    return result;
}