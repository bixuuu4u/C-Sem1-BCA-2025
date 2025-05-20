/*Write a programs to print follwing pattern for first n lines
 *1
 ***3
 *****5
 odd numbers
 */

#include <stdio.h>
void printPattern(int n); // Needs a integer
void pP(int n);           // Needs a integer
int main()
{
    int n = 5;
    // printPattern(n);
    pP(n);
    return 0;
}
void printPattern(int n)
{

    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printPattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }

    printf("\n");
}

void pP(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Calculate the number of asterisks for the current line
        int numAsterisks = 2 * i - 1;

        // Print the asterisks
        for (int j = 0; j < numAsterisks; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
}
