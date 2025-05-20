// Emp structure

#include <stdio.h>

typedef struct
{
  int emp_id;
  char name[50];
  float salary;
} Employee;

int main()
{
  Employee emp = {101, "John Doe", 50000.50};

  printf("\nEmployee Details:\n");
  printf("ID: %d\n", emp.emp_id);
  printf("Name: %s\n", emp.name);
  printf("Salary: %.2f\n", emp.salary);

  return 0;
}
