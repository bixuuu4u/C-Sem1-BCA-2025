// Wap to illustrate diffn storage class and their scope and lifetime
// StorageClass     	Scope	      Lifetime	                            Example
// auto	Local to block	Created & destroyed within the function	Local function variables (default)
// register	Local to block	Created & destroyed within the function	Variables stored in CPU registers for fast access
// static	Local to block	Exists throughout the program	Retains value between function calls
// extern	Global	Exists throughout the program	Used to refer to global variables from other files

#include <stdio.h>

int globalVar = 10;

void staticDemo()
{
  static int count = 0;
  count++;
  printf("Static variable count: %d\n", count);
}

int main()
{
   int autoVar = 5;
  printf("Auto variable: %d\n", autoVar);

  register int regVar = 20;
  printf("Register variable: %d\n", regVar);
  staticDemo();
  staticDemo();
  staticDemo();

  printf("Global (extern) variable: %d\n", globalVar);
  return 0;
}