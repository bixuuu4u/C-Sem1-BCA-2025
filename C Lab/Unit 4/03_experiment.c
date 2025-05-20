#include <stdio.h>
struct employee
{
    char name[100];
    int id;
    int age;
    float salary;
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter Employee Code\n");
    scanf("%d", &e1.id);
    printf("Enter Employee Age\n");
    scanf("%d", &e1.age);
    printf("Enter Employee salary\n");
    scanf("%f", &e1.salary);
    printf("Enter Employee name\n");
    scanf(" %s", &e1.name);

    printf("Enter Employee Code\n");
    scanf("%d", &e2.id);
    printf("Enter Employee Age\n");
    scanf("%d", &e2.age);
    printf("Enter Employee salary\n");
    scanf("%f", &e2.salary);
    printf("Enter Employee name\n");
    scanf(" %s", &e2.name);

    printf("Enter Employee Code\n");
    scanf("%d", &e3.id);
    printf("Enter Employee Age\n");
    scanf("%d", &e3.age);
    printf("Enter Employee salary\n");
    scanf("%f", &e3.salary);
    printf("Enter Employee name\n");
    scanf(" %s", &e3.name);

    printf("%d %d %f %s\n", e1.id, e1.age, e1.salary, e1.name);

    printf("%d %d %f %s\n", e2.id, e2.age, e2.salary, e2.name);
    printf("%d %d %f %s\n", e3.id, e3.age, e3.salary, e3.name);

    return 0;
}