#include <stdio.h>

struct Student
{
    char name[100];
    int id;
    int age;
    float fees;
};

int main()
{
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);
    struct Student s[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter Student %d Code: ", i + 1);
        scanf("%d", &s[i].id);
        printf("Enter Student %d Age: ", i + 1);
        scanf("%d", &s[i].age);
        printf("Enter Student %d fees: ", i + 1);
        scanf("%f", &s[i].fees);
        printf("Enter Student %d Name: ", i + 1);
        scanf(" %s", s[i].name);
    }

    printf("\nStudent Details:\n");

    for (int i = 0; i < size; i++)
    {
        if (s[i].fees > 500)
        {
            printf("%d %d %.2f %s\n", s[i].id, s[i].age, s[i].fees, s[i].name);
        }
    }

    return 0;
}
