#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Function prototypes
void playGame(int n); // Function to play the guessing game
int selectLevel();    // Function to select the difficulty level

int main()
{
    int n;           // Variable to hold the maximum number based on difficulty level
    char userChoice; // Variable to hold the user's choice to play again or exit

    do
    {
        // Display the difficulty level options to the user
        printf("\n\nENTER THE LEVEL YOU WANNA PLAY\n\n\t1: EASY\n\t2: MEDIUM\n\t3: HARD\n");

        n = selectLevel(); // Get the maximum number based on user's difficulty level choice
        playGame(n);       // Start the guessing game with the selected maximum number

        // Ask the user if they want to play again or exit
        printf("Do you want to play again? (P to play again, E to exit):\n");
        scanf(" %c", &userChoice); // Note the space before %c to consume any leftover newline character
        printf("You have entered %c\n", userChoice);

    } while (userChoice == 'p' || userChoice == 'P'); // Continue if the user wants to play again

    return 0;
}

// Function to play the guessing game
void playGame(int n)
{
    int userNumber;                    // Variable to hold the user's guessed number
    int userAttempts = 0;              // Counter for the number of attempts made by the user
    srand(time(0));                    // Seed the random number generator with the current time
    int randomNumber = rand() % n + 1; // Generate a random number between 1 and n

    // Debugging purpose: Uncomment the line below to see the random number
    // printf("%d\n", randomNumber);

    printf("Guess the number between 1 to %d\n", n);

    bool validInput;
    do // Game loop to get user's guesses
    {
        validInput = scanf("%d", &userNumber) == 1; // Read user's guess and check if input is valid
        if (!validInput)
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n')
                ; // Clear the invalid input
        }
        else
        {
            if (userNumber > randomNumber)
            {
                printf("Lower\n"); // Hint that the guess is too high
            }
            else if (userNumber < randomNumber)
            {
                printf("Higher\n"); // Hint that the guess is too low
            }
            userAttempts++; // Increment attempt counter
        }

    } while (userNumber != randomNumber); // Continue until the correct guess

    // Congratulate the user and show number of attempts
    printf("You have guessed it right in %d attempts\n", userAttempts);
}

// Function to select the difficulty level and return the corresponding maximum number
int selectLevel()
{
    int level; // Variable to hold the user's level choice
    int n;     // Variable to hold the maximum number for the selected level

    // Read the user's level choice
    scanf("%d", &level);

    // Set the maximum number based on the level choice
    if (level == 1)

    {
        n = 10; // EASY levels
    }
    else if (level == 2)
    {
        n = 100; // MEDIUM level
    }
    else if (level == 3)
    {
        n = 200; // HARD level
    }
    else
    {
        // If the user enters an invalid choice, prompt again
        printf("Invalid!! Enter 1, 2, or 3\n");
        n = selectLevel(); // Recursive call to ensure a valid level is entered
    }

    return n; // Return the maximum number for the selected level
}
