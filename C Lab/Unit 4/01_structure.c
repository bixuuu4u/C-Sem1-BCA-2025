#include <stdio.h>

struct emp
{
    int no;
    char name[10];
    char gender;
};

struct college
{
    int student_id;
    char student_name[100];
    int student_fee;
    char student_gender;
};

int main()
{
    // struct emp e = {100, "Bius", 'M'};
    // e.no = 102;
    // printf("Emp id %d\n", e.no);
    // printf("Emp name %s\n", e.name);
    // printf("Emp gender %c\n", e.gender);

    struct college s1 = {434, "Biswajeet", 100000, 'M'};
    printf("Stundet Id -%d \nStudent Name-%s\n Student Fee- %d \n Studnet Gender-%c", s1.student_id, s1.student_name, s1.student_fee, s1.student_gender);

    return 0;
}