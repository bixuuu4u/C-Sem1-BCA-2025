// Wap where you need to store and process data for a book with attributes like
// title ,author,price

#include <stdio.h>
#include <string.h>
typedef struct
{
  char titles[100];
  char author[100];
  float prices;
} book;

void input_book(book *b)
{
  printf("\nPLease enter the book title:");
  fgets(b->titles, 100, stdin);
  b->titles[strcspn(b->titles, "\n")] = '\0';
  printf("Please enter the author:");
  fgets(b->author, 100, stdin);
  b->author[strcspn(b->author, "\n")] = '\0';
  printf("Please enter the price:");
  scanf("%f", &(b->prices));
  while (getchar() != '\n')
    ;
}
void print_book(book *b)
{
  printf("\n%s is written by %s and sold for %.2f\\-", b->titles, b->author, b->prices);
}

int main()
{
  //   char titles[3][100];
  //   char author[3][100];
  //   float prices[3];
  printf("Welcome to the Book Store.\n");
  book Books[3];
  for (int i = 0; i < 3; i++)
  {
    input_book(&Books[i]);
  }
  for (int i = 0; i < 3; i++)
  {
    print_book(&Books[i]);
  }
  return 0;
}
