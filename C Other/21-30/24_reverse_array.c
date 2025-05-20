#include <stdio.h>
const int SIZE = 10;

void input_array(int array[SIZE]);
void display(int array[SIZE]);
void reverse_array(int array[SIZE]);
int main()
{
  int arr[SIZE];
  input_array(arr);
  display(arr);
  reverse_array(arr);
  display(arr);

  return 0;
}
void reverse_array(int array[SIZE])
{
  int start = 0, end = SIZE - 1;
  for (int i = 0; i < SIZE / 2; i++)
  {
    int temp = array[end];
    array[end] = array[start];
    array[start] = temp;
    start++;
    end--;
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