#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2;
    e1.code = 4;
    e1.salary = 78;
    strcpy(e1.name, "Bisu");

    printf("%d %f %s", e1.code, e1.salary, e1.name);
    return 0;
}