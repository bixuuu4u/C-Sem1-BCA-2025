// Initialize an array of Book structures with diffresnt data for each book using designeted initializers.

#include <stdio.h>
typedef struct
{
  char titles[100];
  char author[100];
  float prices;
} Book;

void print_book(Book *b)
{
  printf("\n%s is written by %s and sold for %.2f\\-", b->titles, b->author, b->prices);
}

int main()
{
  printf("Welcome to the Book Store.\n");
  Book books[3] = {{.titles = "Hello", .author = "Bisu", .prices = 908},
                   {.titles = "Hi", .author = "Ram", .prices = 1883},
                   {.titles = "Hey", .author = "Hari", .prices = 9208}};
  for (int i = 0; i < 3; i++)
  {
    print_book(&books[i]);/
  }
  return 0;
}