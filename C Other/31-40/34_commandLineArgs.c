// The main function in C can accept arguments from the command line using this syntax:
// int main(int argc, char *argv[])
// argc: Argument Count — holds the number of arguments passed. It includes the program name itself.
// argv : Argument Vector — an array of strings(character pointers) that holds each argument.

//Command line arguments let you give input to your program 
//when it starts, instead of writing input inside the code or asking the user during execution (like with scanf).


#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 3)
  {
    printf("Usage: %s value1 value2\n", argv[0]);
    return 1;
  }

  printf("First argument: %s\n", argv[1]);
  printf("Second argument: %s\n", argv[2]);

  return 0;
}
