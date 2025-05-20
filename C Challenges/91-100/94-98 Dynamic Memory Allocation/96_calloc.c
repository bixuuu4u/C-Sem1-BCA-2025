// Use calloc to allocate an array for a set of char characters
// representing a sentence, ensuring all the memory is initialized
// to zero.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *sentence = (char *)calloc(100, sizeof(char));
  if (sentence == NULL)
  {
    printf("Memory error.");
    return 1;
  }

  printf("Ensuing all elemnts are initialized");
  for (int i = 0; i < 100; i++)
  {
    printf("%d ", sentence[i]);
  }

  printf("\nEnter a sentence: ");
  fgets(sentence, 100, stdin);
  printf("Here is your text: %s", sentence);

  free(sentence);
  sentence = NULL;

  return 0;
}