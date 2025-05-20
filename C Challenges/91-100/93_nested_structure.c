// Write a function where the student structure also has books they have borrowed inside,showing
// nested structure usages

#include <stdio.h>
typedef struct
{
  char titles[100];
  char author[100];
  float prices;
} Book;

typedef struct
{
  char id[10];
  char name[50];
  char year[10];
  char grade;
  int number_of_books;
  Book borrowed_books[3];
} Student;

void print_details(Student *);

int main()
{
  Student stu1 = {.id = "BI240", .name = "Bisu", .year = "First", .grade = 'B', .number_of_books = 2, .borrowed_books = {{.titles = "Hello", .author = "Bisu", .prices = 908}, {.titles = "Hi", .author = "Ram", .prices = 1883}}};

  printf("Welcome to GEC\n");

  print_details(&stu1);

  return 0;
}

void print_details(Student *stu)
{
  printf("Name-%s\nId-%s\nYear-%s\nGrade-%c\n\n", stu->name, stu->id, stu->year, stu->grade);
  printf("\nHere are the books borrowed: ");
  for (int i = 0; i < stu->number_of_books; i++)
  {
    printf("Book Details:\nTitle-%s\nAUthor-%s\nPrice-%f\n", stu->borrowed_books[i].titles, stu->borrowed_books[i].author, stu->borrowed_books[i].prices);
  }
}