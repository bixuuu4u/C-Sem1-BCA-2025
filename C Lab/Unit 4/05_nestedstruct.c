#include <stdio.h>

struct dob
{
    int d;
    int m;
    int y;
};
struct emp
{
    char name[10];
    int age;
    float salary;
    struct dob d1;
};
void main()
{
    struct emp e1;
    printf("Enter Details\n");
    scanf("%s %d %f %d %d %d", &e1.name, &e1.age, &e1.salary, &e1.d1.d, &e1.d1.m, &e1.d1.y);
    printf("\nName=%s\nAge=%d\nSalary=%0.2f\nDOB-%d %d %d", e1.name, e1.age, e1.salary, e1.d1.d, e1.d1.m, e1.d1.y);
}