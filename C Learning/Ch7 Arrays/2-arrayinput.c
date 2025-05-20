// Inptut array using loops
#include <stdio.h>

int main()
{
    int age[10] = {12, 13, 14, 11, 111, 1, 11, 63, 98, 00};
    int marks[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the mark of student Roll no %d \n", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The marks of student Roll no %d is:: %d \n", i + 1, marks[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The age of 10 students is::%d \n", age[i]);
    }

    return 0;
}