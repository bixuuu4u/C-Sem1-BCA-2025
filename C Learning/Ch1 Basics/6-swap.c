// #include <stdio.h>

// int main()
// {
//     int a, b, temp;
//     a = 5;
//     b = 7;
//     printf("The value of a and b before swap is %d and %d\n", a, b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("The value of a and b after swap is %d and %d\n", a, b);
//     return 0;
// }

// Without 3rd variable
#include <stdio.h>

int main()
{

    int a = 7, b = 5;
    printf("Before swap a=%d b=%d\n", a, b);

    a += b;

    b = a - b;
    a = a - b;

    printf("After swap a=%d b=%d\n", a, b);

    return 0;
}