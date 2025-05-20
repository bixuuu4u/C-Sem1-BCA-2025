#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "xyzza";
    int length = strlen(name);

    for (int i = 0; i < length; i++)
    {
        // Outer loop to handle letters from 'a' to the current character
        for (char ch = 'a'; ch <= name[i]; ch++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j < i)
                {
                    printf("%c", name[j]);
                }
                else
                {
                    printf("%c", ch);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
