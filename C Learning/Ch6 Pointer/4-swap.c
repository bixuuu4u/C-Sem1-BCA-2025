#include <stdio.h>
void wrong_swap(int x, int y);
void swap(int *x, int *y);
int main()
{
    int a, b;
    a = 5;
    b = 7;
    printf("The value of a and b before swap is %d and %d\n", a, b);
    // wrong_swap(a, b); // call by value copy is send to function and a,b cant be changed

    swap(&a, &b); // call by ref can change the vaue in main fucntion useing the address of ints
    //& is uesd to get the address of the variables
    printf("The value of a and b after swap is %d and %d\n", a, b);
    return 0;
}
void wrong_swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    // star operator is used to get the value
    //* is value of the address operator

    *x = *y;
    *y = temp;
}