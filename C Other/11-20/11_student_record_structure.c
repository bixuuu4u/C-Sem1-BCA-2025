// Srtudent Structure
#include <stdio.h>

typedef struct
{
  int roll_no;
  char name[50];
  float marks;
} Student;

int main()
{
  Student s = {101, "Alice", 92.5};

  printf("\nStudent Details:\n");
  printf("Roll No: %d\n", s.roll_no);
  printf("Name: %s\n", s.name);
  printf("Marks: %.2f\n", s.marks);

  return 0;
}
