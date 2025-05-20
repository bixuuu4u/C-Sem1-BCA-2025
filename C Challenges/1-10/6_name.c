// Wap for storing user's first name last name and ange using appropriate naming conventions and display them

#include <stdio.h>
int main()
{
    char f_name[20];
    char l_name[20];
    int age;
    printf("Hey Please Enter Your First Name: ");
    scanf(" %19s", f_name);
    printf("Now,Enter Your Last Name: ");
    scanf(" %19s", l_name);
    printf("Your Age: ");
    scanf("%d", &age);
    printf("Hey %s %s you are of %dyears old", f_name, l_name, age);
    return 0;
}