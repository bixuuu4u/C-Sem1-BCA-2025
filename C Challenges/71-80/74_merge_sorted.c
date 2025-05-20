// Wap to merge two sorted arrays.

#include <stdio.h>
void mergeSorted(int arr1[], int size1,
                 int arr2[], int size2,
                 int arr3[], int size3);
void print_array(int arr[], int size);
int main()
{
  int arr1[5] = {1, 3, 5, 7, 9};
  // int arr1[5] = {1};
  int arr2[7] = {2, 4, 6, 8, 10, 12, 14};
  int arr3[12];

  printf("\nWelcome to merging sorted array..");
  printf("\nHere is the merged array:");
  mergeSorted(arr1, 5, arr2, 7, arr3, 12);
  print_array(arr3, 12);

  return 0;
}
void mergeSorted(int arr1[], int size1,
                 int arr2[], int size2,
                 int arr3[], int size3)
{
  int i = 0, j = 0, k = 0;
  while (k < size3)
  {
    if (j == size2 || (i < size1 && arr1[i] < arr2[j]))
    {
      arr3[k] = arr1[i++];
      // i++;
    }
    else
    {
      arr3[k] = arr2[j++];
      // j++;
    }

    // if (j == size2)
    // {
    //   arr3[k] = arr1[i++];
    // }
    // else if (i == size1)
    // {
    //   arr3[k] = arr2[j++];
    // }
    // else if (arr1[i] < arr2[j])
    // {
    //   arr3[k] = arr1[i++];
    //   // i++;
    // }
    // else
    // {
    //   arr3[k] = arr2[j++];
    //   // j++;
    // }
    k++;
  }
}

void print_array(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
}