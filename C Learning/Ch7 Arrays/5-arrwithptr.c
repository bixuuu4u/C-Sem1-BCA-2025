#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0]; // points towards first element of the marks array
    ptr = marks;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks for stundet %d\n", i + 1);
        // scanf("%%d", &marks[i]);
        scanf("%d", ptr);

        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {

        printf("Mark of student 1 is %d\n", marks[i]);
    }

    return 0;
}