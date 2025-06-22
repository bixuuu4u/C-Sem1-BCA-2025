//Vowels in sentence
#include <stdio.h>
#include <ctype.h>
const int SIZE = 100;
int main()
{
  char sentence[SIZE];
  printf("Enter a sentence[100]");
  fgets(sentence, SIZE, stdin);
  int vowel_count = 0, consonant_count = 0;

  for (int i = 0; sentence[i] != '\0'; i++)
  {
    printf("%c", sentence[i]);

    char ch = tolower(sentence[i]);
    if (isalpha(ch))
    {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vowel_count++;
      }
      else
      {
        consonant_count++;
      }
    }
  }

  printf("Vowels: %d", vowel_count);
  printf("Consonat: %d", consonant_count);

  return 0;
}