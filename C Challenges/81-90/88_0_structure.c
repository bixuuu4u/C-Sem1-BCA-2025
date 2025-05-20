// Wap where you need to store and process data for a book with attributes like
// title ,author,price

#include <stdio.h>
#include <string.h>
// struct book
// {
// };

int main()
{
  char titles[3][100];
  char author[3][100];
  float prices[3];
  printf("Welcome to the Book Store.");

  for (int i = 0; i < 3; i++)
  {
    printf("Please enter the title:");
    fgets(titles[i], sizeof(titles[i]), stdin);
    // titles[i][strcspn(titles[i], "\n")] = '\0';
    printf("Please enter the author:");
    fgets(author[i], sizeof(author[i]), stdin);
    // author[i][strcspn(author[i], "\n")] = '\0';

    printf("Please enter the price:");
    scanf(" %f", &prices[i]);
    while (getchar() != '\n')
  }
  for (int i = 0; i < 3; i++)
  {
    printf("\n%s is written by %s and sold for %.2f\\-", titles[i], author[i], prices[i]);
  }

  return 0;
}