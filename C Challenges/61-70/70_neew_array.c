// Wap to return a new array deleting a specific element.
#include <stdio.h>
void delete_element(int arr[], int size, int new_arr[], int *new_size, int element);
void print_array(int arr[], int size);
int main()
{
  int arr[] = {2, 5, 7, 7, 9, 10, 1, 0};

  int new_arr[8];
  int new_size;

  delete_element(arr, 8, new_arr, &new_size, 5);
  printf("\nThe array after deleting 5 is :");
  print_array(new_arr, new_size);

  delete_element(arr, 8, new_arr, &new_size, 7);
  printf("\nThe array after deleting 7 is :");
  print_array(new_arr, new_size);

  delete_element(arr, 8, new_arr, &new_size, 100);
  printf("\nThe array after deleting 100 is :");
  print_array(new_arr, new_size);

  delete_element(arr, 8, new_arr, &new_size, 0);
  printf("\nThe array after deleting 0 is :");
  print_array(new_arr, new_size);

  return 0;
}
void delete_element(int arr[], int size, int new_arr[], int *new_size, int element)
{
  int j = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != element)
    {
      new_arr[j] = arr[i];
      j++;
    }
  }
  *new_size = j;
}
void print_array(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
}
