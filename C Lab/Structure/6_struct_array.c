#include <stdio.h>
struct student
{
    char fname[10];
    char lname[10];
    int age;
    float fees;
};
int main()
{
    struct student s[3];
    printf("\nEnter Details\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d.First Name: ", i + 1);
        scanf("%s", &s[i].fname);
        printf("%d.Last Name: ", i + 1);
        scanf("%s", &s[i].lname);
        printf("%d.Age: ", i + 1);
        scanf("%d", &s[i].age);
        printf("%d.Fees: ", i + 1);
        scanf("%f", &s[i].fees);
    }
    printf("\n-----------------------------\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d.Name= %s %s\nSalary=%.2f   Age=%d\n", i + 1, s[i].fname, s[i].lname, s[i].fees, s[i].age);
    }
    printf("\n-----------------------------\n");

    printf("Students having Fess > 500 \n");
    for (int i = 0; i < 3; i++)
    {
        if (s[i].fees > 5000)
        {
            printf("%d.Name= %s %s\nSalary=%.2f   Age=%d\n", i + 1, s[i].fname, s[i].lname, s[i].fees, s[i].age);
        }
    }
    return 0;
}