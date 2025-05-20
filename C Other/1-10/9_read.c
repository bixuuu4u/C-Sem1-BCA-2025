// Wap to read and dispplay student recordes from a file

#include <stdio.h>
#include <stdlib.h>
typedef struct Student
{
  char name[50];
  int roll_no;

} Student;

const char *FILENAME = "9_read.txt";  

void takeinput(Student *, int, FILE *);
void display(const char *);
int main()
{
  int choice;
  printf("What you wanna do\n\t1.Write And Read\n\t2.Read Only\n");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
  {
    FILE *file = fopen(FILENAME, "a+");

    if (file == NULL)
    {
      printf("Error opening file!\n");
      return 1;
    }
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    Student *s = (Student *)malloc(size * sizeof(Student));
    if (s == NULL)
    {
      printf("\nMemory Aloocation Failedd..");
      fclose(file);
      return 1;
    }
    takeinput(s, size, file);
    free(s);
    display(FILENAME);

    break;
  }
  case 2:
  {

    display(FILENAME);
    break;
  }
  default:
    printf("Wrong Choice");
    break;
  }

  return 0;
}

void takeinput(Student *s, int n, FILE *fp)
{

  for (int i = 0; i < n; i++)
  {
    printf("\nEnter Details for student %d:\n ", i + 1);
    printf("Enter student name: ");
    scanf("%49s", s[i].name);
    printf("Enter roll number: ");
    scanf("%d", &s[i].roll_no);
    fprintf(fp, "%s %d\n", s[i].name, s[i].roll_no);
  }
  fclose(fp);
}

void display(const char *FILENAME)
{
  FILE *fp = fopen(FILENAME, "r");
  if (fp == NULL)
  {
    printf("Error opening file for reading!\n");
    return;
  }
  Student s;
  printf("\nStudent Records from File:\n");
  while (fscanf(fp, "%s %d", s.name, &s.roll_no) != EOF)
  {
    printf("Name: %s, Roll Number: %d\n", s.name, s.roll_no);
  }
  fclose(fp);
}