#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// TODO: Do some more inprovements

// Global variables
int sanity = 100;
int health = 100;
int food = 10;
int water = 10;
int ammo = 5;

// Function prototypes
void playGame(int days);
void randomEvent();
void zombieEncounter();
void findResources();
void sanityCheck();
void gameOver(const char *message);

int main()
{
    srand(time(0)); // Seed the random number generator
    char choice;

    printf("\nWelcome to Zombie Apocalypse Survival\n\n");
    do
    {
        printf("Surviving a zombie apocalypse... Enter S to start\n");
        playGame(0);
        printf("If you want to play again, enter p: ");
        scanf(" %c", &choice);
    } while (choice == 'p' || choice == 'P');

    return 0;
}

// Function to play the game recursively
void playGame(int days)
{
    char choice;

    if (days >= 30)
    { // Win condition
        printf("Congratulations! You survived for 30 days!\n");
        return;
    }

    if (sanity <= 0 || health <= 0 || food <= 0 || water <= 0)
    {
        gameOver("You couldn't survive the apocalypse.");
        return;
    }

    printf("Day %d: Choose your action - (E)xplore, (R)est, (C)heck Status: ", days + 1);
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'e':
    case 'E':
        randomEvent();
        break;
    case 'r':
    case 'R':
        printf("You rest for the day. Your sanity improves slightly.\n");
        sanity += 10;
        sanityCheck();
        break;
    case 'c':
    case 'C':
        printf("Status - Sanity: %d, Health: %d, Food: %d, Water: %d, Ammo: %d\n", sanity, health, food, water, ammo);
        break;
    default:
        printf("Invalid choice. Try again.\n");
        break;
    }

    playGame(days + 1); // Recursive call for the next day
}

// Function to handle random events
void randomEvent()
{
    int event = rand() % 100;

    if (event < 40)
    {
        zombieEncounter();
    }
    else
    {
        findResources();
    }
}

// Function for zombie encounters
void zombieEncounter()
{
    printf("A zombie approaches!\n");

    if (ammo > 0)
    {
        printf("You use some ammo to fend off the zombie.\n");
        ammo--;
        sanity -= 10;
        sanityCheck();
    }
    else
    {
        printf("You have no ammo left! The zombie attacks you.\n");
        health -= 20;
    }

    printf("Current Status - Sanity: %d, Health: %d, Food: %d, Water: %d, Ammo: %d\n", sanity, health, food, water, ammo);
}

// Function to find resources
void findResources()
{
    int resource = rand() % 3;

    switch (resource)
    {
    case 0:
        printf("You found some food!\n");
        food += 5;
        break;
    case 1:
        printf("You found some water!\n");
        water += 5;
        break;
    case 2:
        printf("You found some ammo!\n");
        ammo += 3;
        break;
    }

    printf("Current Status - Sanity: %d, Health: %d, Food: %d, Water: %d, Ammo: %d\n", sanity, health, food, water, ammo);
}

// Function to check and adjust sanity
void sanityCheck()
{
    if (sanity > 100)
    {
        sanity = 100;
    }
    else if (sanity <= 0)
    {
        sanity = 0;
        gameOver("You lost your sanity.");
    }
}

// Function to handle game over conditions
void gameOver(const char *message)
{
    printf("%s\n", message);
    printf("Game Over. Your final status - Sanity: %d, Health: %d, Food: %d, Water: %d, Ammo: %d\n", sanity, health, food, water, ammo);
}
