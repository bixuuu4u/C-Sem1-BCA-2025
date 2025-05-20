#include <stdio.h>
#include <time.h>

#include <stdlib.h>

// Global variables
int sanity = 100; // Global variable for player's sanity
int checkpriestess = 0;
// Function prototypes
void playgame(int drawTimes);
void generateCard();
void tower();
void wheelOfFortune(char color);
void fool();
void devil();
void death();
void hermit();
void sun();
void moon();
void Priestess();
void hangedman();

int main()
{
    srand(time(0)); // Seed the random number generator once
    char choice;

    printf("\nWelcome to Tarot Cards\n\n");
    do
    {
        printf("To Draw a card.. Enter D\n");
        playgame(0);
        sanity = 100;
        printf("If you wanna play again.. Enter p\n");
        scanf(" %c", &choice);
        // Clear input buffer before reading user choice
        // while (getchar() != '\n')

        // scanf(" %c", &choice);
    } while (choice == 'p' || choice == 'P');

    return 0;
}

// Function to play the game recursively
void playgame(int drawTimes)
{
    char draw_card;
    if (drawTimes >= 10 && sanity != 0)
    {
        printf("You won the game\n");
    }
    // Base case: stop recursion after 10 draws
    if (drawTimes >= 10)
    {
        return;
    }

    // Prompt user to draw another card after the first draw
    if (drawTimes >= 1)
    {
        printf("To Draw another card.. Enter D\n");
    }
    if ((sanity == 0 || sanity <= 0) && checkpriestess == 1)
    {
        printf("You are revived!\n");
        sanity = 40;
    }
    else if (sanity == 0 || sanity <= 0)
    {
        printf("Game over\n");
        return;
    }

    scanf(" %c", &draw_card);

    // Draw a card based on random chance
    if (draw_card == 'd' || draw_card == 'D')
    {
        // Debug
        // printf("Debug Sanity %d\n", sanity);
        generateCard(); // Call function to generate and print a card
        drawTimes++;
        playgame(drawTimes); // Recursive call to draw another card
    }
    else
    {
        printf("What kind of animal are you..\n");
        playgame(drawTimes); // Continue with the same draw count if invalid input
    }
}

// Function to generate and print a random card
void generateCard()
{
    int card_type = rand() % 100 + 1;

    if (card_type <= 20)
    {
        printf("Tower\n");
        tower();
    }
    else if (card_type <= 40)
    {
        printf("WOF\n");
        char color = (rand() % 2 == 0) ? 'g' : 'r';
        printf("Color: %c\n", color);
        wheelOfFortune(color);
    }
    else if (card_type <= 57)
    {
        printf("Fooled\n");
        fool();
    }
    else if (card_type <= 67)
    {
        printf("Devil\n");
        devil();
    }
    else if (card_type <= 77)
    {
        printf("Death\n");
        death();
    }
    else if (card_type <= 87)
    {
        printf("Hermit\n");
        hermit();
    }
    else if (card_type <= 92)
    {
        printf("Sun\n");
        sun();
    }
    else if (card_type <= 97)
    {
        printf("Moon\n");
        moon(); // Call moon function
    }
    else if (card_type <= 99)
    {
        printf("High pristes\n");
        Priestess();
    }
    else
    {
        printf("Hanged man\n");
        hangedman();
    }
}

// Function for tower logic
void tower()
{
    printf("Ghost just interact with a object \n");

    if (sanity - 10 <= 0)
    {
        sanity = 0; // Cap sanity at 0
    }
    else
    {
        sanity -= 10; // decrease sanity by 10
        printf("Sanity decreased by 10 \n");
        printf("Sanity Monitor:: %d\n", sanity);
    }
}

// Function for Wheel of Fortune card logic
void wheelOfFortune(char color)
{
    if (color == 'g' || color == 'G')
    { // Green
        if (sanity + 25 > 100)
        {
            sanity = 100; // Cap sanity at 100
            printf("Sanity Monitor:: %d\n", sanity);
        }
        else
        {
            sanity += 25; // Increase sanity by 25
            printf("Sanity increased by 25\n", sanity);
            printf("Sanity Monitor:: %d\n", sanity);
        }
    }
    else if (color == 'r' || color == 'R')
    { // Red
        if (sanity - 25 <= 0)
        {
            sanity = 0; // Game over if sanity drops to 0
            printf("Game over! Sanity dropped to 0.\n");
        }
        else
        {
            sanity -= 25; // Decrease sanity by 25
            printf("Sanity decreased by 25\n");
            printf("Sanity Monitor:: %d\n", sanity);
        }
    }
    else
    {
        printf("Invalid color!\n");
    }
}

//// Function for fool logic
void fool()
{
    printf("You got fooled,Nothing happens\n");
    printf("Sanity Monitor:: %d\n", sanity);
}
// Function for Devil card logic
void devil()
{
    printf("bhooo!!\n");
    printf("The ghost just scared youu!!\n");

    if (sanity - 30 <= 0)
    {
        sanity = 0; // Cap sanity at 0
    }
    else
    {
        sanity -= 30; // decrease sanity by 30
        printf("Sanity decreased by 30\n", sanity);
        printf("Sanity Monitor:: %d\n", sanity);
    }
}

// Function for Death card logic
void death()
{
    printf("The ghost just chased you for 20sec but you managed to survive the hunt !!!\n");

    if (sanity - 35 <= 0)
    {
        sanity = 0; // Cap sanity at 0
    }
    else
    {
        sanity -= 35; // decrease sanity by 35
        printf("Sanity decreased by 35\n", sanity);
        printf("Sanity Monitor:: %d\n", sanity);
    }
}

// Function for hermit card logic
void hermit()

{
    printf("The ghost just got locked !!!\n");
    if (sanity + 15 >= 100)
    {
        sanity = 100; // Cap sanity at 100
        printf("Sanity increased by 15\n");
        printf("Sanity Monitor:: %d\n", sanity);
    }
    else
    {
        sanity += 15; // increase sanity by 15
        printf("Sanity increased by 15\n");
        printf("Sanity Monitor:: %d\n", sanity);
    }
}

// Function for Sun card logic
void sun()
{
    printf("Sun card drawn! \n");
    sanity = 100;
    printf("Sanity restored to %d\n", sanity);
}

//  Function for Moon card logic
void moon()
{
    printf("Moon card drawn!\n");
    sanity = 0; // Set sanity to 0
    printf("Game over! Sanity dropped to %d\n", sanity);
}

//  Function for The High Priestess card logic
void Priestess()
{
    printf("So lucky got the revive card\nYou will be revived once if you die by 0 sanity or hanged man\n");
    checkpriestess = 1;
}
//  Function for Moon card logic
void hangedman()
{
    printf("The ghost killed you\n");
    sanity = 0;
    printf("You die\n");
}