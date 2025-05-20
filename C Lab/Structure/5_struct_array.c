#include <stdio.h>
struct student
{
    char fname[10];
    char lname[10];
    int age;
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
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d.Name= %s %s\nAge=%d\n", i + 1, s[i].fname, s[i].lname, s[i].age);
    }
    return 0;
}