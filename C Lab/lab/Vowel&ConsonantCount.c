#include <stdio.h>
#include <ctype.h>
int main()

{
    int vowel_c = 0;
    int consonant_c = 0;
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
            {
                vowel_c++;
                // printf("vowel : ");
            }
            else
            {
                consonant_c++;
                // printf("Consonant : ");
            }
        }
    }
    printf("Vowel=%d\nConsonant=%d", vowel_c, consonant_c);

    return 0;
}