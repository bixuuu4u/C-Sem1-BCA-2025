// Create a program that dynamically allocates memory for a Car
// structure and then free it at the end of the program.

// Pass a car strucutre to a function that prints out a description of th car in one complete sentence

#include <stdio.h>
#include <stdlib.h>
struct Car
{
  char make[25];
  char model[25];
  int year;
  char color[15];
};
typedef struct Car Car;

void print_car(Car *car);

int main()
{
  printf("\n");
  Car *my_car = (Car *)malloc(sizeof(Car));
  if (my_car == NULL)
  {
    printf("\nMemory was not allocated.");
    return 1;
  }

  printf("Please Car Model:");
  scanf("%s", my_car->model);
  printf("Car Make:");
  scanf("%s", my_car->make);
  printf("Car color: ");
  scanf("%s", my_car->color);
  printf("Car Year:");
  scanf("%d", &my_car->year);
  printf("\n\n");
  print_car(my_car);

  free(my_car);
  my_car = NULL;

  return 0;
}
void print_car(Car *car)
{
  printf("This %s model of car which is %s coloured was purchased in %d year and is made by %s company.", car->model, car->color, car->year, car->make);
}