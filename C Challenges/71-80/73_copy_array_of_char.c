// Wap that uses pointer arithimetic to copy an array of char into another

#include <stdio.h>
void print_array(char arr[], int size);
void copy(char arr[], int size, char new_arr[]);
int main()
{
  char ch[7] = {'B', 'i', 's', 'u', 'u', 'u', 'u'};
  char new_arr[7];
  printf("Printing Original:");
  print_array(ch, 7);
  copy(ch, 7, new_arr);
  printf("\nCopied:");
  print_array(new_arr, 7);

  return 0;
}
void copy(char arr[], int size, char new_arr[])
{
  for (int i = 0; i < size; i++)
  {
    *(new_arr + i) = *(arr + i);
    // *new_arr = *arr;
    // new_arr++;
    // arr++;
  }
}
void print_array(char arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%c", arr[i]);
  }
}
