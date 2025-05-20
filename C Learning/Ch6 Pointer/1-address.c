#include <stdio.h>

int main()
{
    int a = 4;
    int b = 5;
    int *store = &a; // Store will now store the address of a
    // * is value of address operator
    printf("A =%d\n", a);
    printf("The value of a %d\n", *store);
    printf("Add of a::%u\n", &a); // u is a special format specifier fr displaying address of data types
    printf("Add of a::%u\n", store);
    printf("add of store:: %u\n", &store);
    printf("The value of store is %d\n", *(&store));

    // TO STORE THE ADDRES OF A POINTER USE POINTER TO POINTER **
    int **ptop = &store;
    // ptop will store the address of store  now
    printf("The adress of store is %u\n", ptop);
    printf("The adress of store is %d\n", &store);
    return 0;
}