#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct employee e[3];
    e[0].code = 5;
    e[1].code = 6;
    printf("e1 code = %d\n", e[0].code);
    printf("e2 code = %d\n", e[1].code);
    return 0;
}