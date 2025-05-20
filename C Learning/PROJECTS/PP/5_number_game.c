#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 10; // Maximum number for random number generation

    int user, attempts = 0; // User's guess and attempt counter

    srand(time(0)); // Seed the random number generator with current time

    int randomNumber = rand() % n + 1; // Generate random number between 1 and n

    // If n = 5, rand() % 5 generates numbers in the range 0 to 4. Adding 1 shifts the range to 1 to 5.

    // Debugging purpose: print the random number
    // printf("The number is ::%d\n", randomNumber);
    printf("Guess the number between 1 to %d\n", n);

    do // Game loop to get user's guesses
    {
        scanf("%d", &user); // Read user's guess
        if (user > randomNumber)
        {
            printf("Lower\n");
        }
        else if (user < randomNumber)
        {
            printf("Higher\n");
        }
        attempts++; // Increment attempt counter
    } while (user != randomNumber); // Continue until the correct guess

    // Congratulate the user and show number of attempts
    printf("You have guessed it right in %d attempts\n", attempts);

    return 0; // End of program
}
