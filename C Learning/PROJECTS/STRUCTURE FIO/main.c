#include <stdio.h>

#define size 2

typedef struct student
{
    int roll;
    char name[30];
    int phone;
} stu;
void takeinput(stu *s, FILE *file);
void display(FILE *file);
void check(FILE *file);

int main()
{
    stu s[size];
    FILE *file;
    check(file);

    takeinput(s, file);
    fclose(file);

    display(file);
    fclose(file);

    return 0;
}
void takeinput(stu *s, FILE *file)

{
    file = fopen("students.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    printf("\nEnter Student Details \n");
    for (int i = 0; i < size; i++)
    {
        printf("\nSN.STUDENT:%d\n", i + 1);
        printf("Name:");
        scanf("%s", s[i].name);
        printf("Roll:");
        scanf("%d", &s[i].roll);
        printf("Phone:");
        scanf("%d", &s[i].phone);
        fprintf(file, "%s %d %d\n", s[i].name, s[i].roll, s[i].phone);
    }
    fclose(file);
}
void display(FILE *file)
{
    printf("STUDENT INFORMATION\n");

    stu s;

    file = fopen("students.txt", "r");
    if (file == NULL)
    {
        printf("No records found!\n");
        return;
    }
    int i = 1;
    while (fscanf(file, "%s %d %d", s.name, &s.roll, &s.phone) != EOF)
    {

        printf("\nSN.STUDENT:%d\n", i++);
        printf("Name:%s\n", s.name);
        printf("Roll:%d\n", s.roll);
        printf("Phone:%d\n", s.phone);
    }

    fclose(file);
}
void check(FILE *file)
{
    file = fopen("students.txt", "r");
    if (file == NULL)
    {
        printf("File doesn't exist. Creating one...\n");
        file = fopen("students.txt", "w");
        fclose(file);
    }
    else
    {
        fclose(file);
    }
}