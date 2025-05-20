#include <stdio.h>
#include <blib.h>
int main()
{
  printf("%d", check_sign(153));
  int a = 5, b = 6;
  printf("%d %d", a, b);
  swap(&a, &b);
  printf("%d %d\n", a, b);
  int array[5] = {1, 5, 6, 7, 8};
  char arr1[] = "Biaaa";
  puts(arr1);
  reverse_string(arr1);
  puts(arr1);
  char str2[] = "HemeH";
  char str3[] = "Hemlo";
  printf("%d\n", is_string_palindrome(str2));
  printf("%d\n", is_string_palindrome(str3));
  print_array(str2, 6, 'c');
  print_array(array, 5, 'i');

  fibonacci(10);
  return 0;
}