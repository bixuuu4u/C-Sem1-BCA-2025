// Write a functioon that accepts a pointer to a structure to a student structure with fields for id name year gpa and modifies its grade

#include <stdio.h>
typedef struct
{
  char id[10];
  char name[50];
  char year[10];
  char grade;
} Student;

void increase_grade(Student *);
void decrease_grade(Student *);
void print_details(Student *);

int main()
{
  Student stu1 = {.id = "BI240", .name = "Bisu", .year = "First", .grade = 'B'};
  Student stu2 = {.id = "BI244", .name = "Ram", .year = "Second", .grade = 'A'};
  Student stu3 = {.id = "BI242", .name = "Shibu", .year = "First", .grade = 'F'};
  printf("Welcome to GEC\n");
  print_details(&stu1);
  print_details(&stu2);
  print_details(&stu3);

  decrease_grade(&stu1);
  increase_grade(&stu3);

  print_details(&stu1);
  print_details(&stu2);
  print_details(&stu3);

  return 0;
}
void increase_grade(Student *stu)
{
  stu->grade--;
}

void decrease_grade(Student *stu)
{
  stu->grade++;
}

void print_details(Student *stu)
{
  printf("Name-%s\nId-%s\nYear-%s\nGrade-%c\n\n", stu->name, stu->id, stu->year, stu->grade);
}