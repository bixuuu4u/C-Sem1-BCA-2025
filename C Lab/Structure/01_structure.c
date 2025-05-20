#include <stdio.h>
struct emp
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct emp e1 = {1, 34000, "Bisu"};
    struct emp e2 = {2, 39000, "Somnath"};
    printf("\n ID-%d NAME-%s SALARY-%.2f\n", e1.code, e1.name, e1.salary);
    printf("ID-%d NAME-%s SALARY-%.2f", e2.code, e2.name, e2.salary);

    return 0;
}