// Wap to demonstate the use of nested structure

#include <stdio.h>
#include <stdlib.h>

typedef struct DOB
{
  int day;
  int month;
  int year;
} DOB;

typedef struct Student
{
  char name[50];
  int roll_no;
  DOB dob;
} Student;

int main()
{
  int n;
  printf("Enter size: ");
  scanf("%d", &n);

  Student *s = (Student *)malloc(n * sizeof(Student));
  if (s == NULL)
  {
    printf("\nMemory Aloocation Failedd..");
    return 1;
  }

  for (int i = 0; i < n; i++)
  {
    printf("\nEnter Details for student %d: ", i + 1);
    printf("Enter student name: ");
    scanf("%s", s[i].name);
    printf("Enter roll number: ");
    scanf("%d", &s[i].roll_no);
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
  }
  for (int i = 0; i < n; i++)
  {
    printf("\n\n\nStudent %d:", i + 1);
    printf("\nStudent name:%s ", s[i].name);
    printf("\nRoll number:%d ", s[i].roll_no);
    printf("\nDate of Birth (DD MM YYYY):%d %d %d ", s[i].dob.day, s[i].dob.month, s[i].dob.year);
  }

  return 0;
}
