#include <stdio.h>
struct dob
{
    int d, m, y;
};
struct employee
{
    char name[10];
    int age;
    float salary;
    struct dob d1;
};

int main()
{
    struct employee e1;
    printf("Enter Details\n1.Name,2.Age,3.Salary,4.DOB[DD MM YYYY]\n");
    scanf("%s %d %f %d %d %d", &e1.name, &e1.age, &e1.salary, &e1.d1.d, &e1.d1.m, &e1.d1.y);
    printf("\nName=%s\nAge=%d\nSalary=%0.2f\nDOB-%d %d %d", e1.name, e1.age, e1.salary, e1.d1.d, e1.d1.m, e1.d1.y);

    return 0;
}
