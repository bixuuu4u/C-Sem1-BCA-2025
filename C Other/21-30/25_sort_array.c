#include <stdio.h>
const int SIZE = 5;

void input_array(int array[SIZE]);
void display(int array[SIZE]);
void sort_array(int array[SIZE]);
void desending_sort_array(int array[SIZE]);

int main()
{
  int arr[SIZE];
  printf("Enter Array:");
  input_array(arr);
  display(arr);
  printf("\nSorted Array: ");
  sort_array(arr);
  display(arr);
  printf("\nDesending Sorted Array: ");

  desending_sort_array(arr);
  display(arr);

  return 0;
}
void sort_array(int array[SIZE])
{
  for (int i = 0; i < SIZE - 1; i++)
  {
    for (int j = 0; j < SIZE - 1 - i; j++)
    {
      if (array[j] > array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
void desending_sort_array(int array[SIZE])
{
  for (int i = 0; i < SIZE - 1; i++)
  {
    for (int j = 0; j < SIZE - 1 - i; j++)
    {
      if (array[j] < array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
void display(int array[SIZE])
{
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n\n");
}
void input_array(int array[SIZE])
{
  printf("Enter Elements:");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d:", i);
    scanf("%d", &array[i]);
  }
}