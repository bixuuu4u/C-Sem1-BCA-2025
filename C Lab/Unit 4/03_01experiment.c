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
    struct employee e[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Employee %d Code: ", i + 1);
        scanf("%d", &e[i].id);
        printf("Enter Employee %d Age: ", i + 1);
        scanf("%d", &e[i].age);
        printf("Enter Employee %d Salary: ", i + 1);
        scanf("%f", &e[i].salary);
        printf("Enter Employee %d Name: ", i + 1);
        scanf(" %s", e[i].name);
    }

    printf("\nEmployee Details:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d %d %.2f %s\n", e[i].id, e[i].age, e[i].salary, e[i].name);
    }

    return 0;
}
