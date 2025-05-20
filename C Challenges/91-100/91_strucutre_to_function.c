// Pass a car strucutre to a function that prints out a description of th car in one complete sentence

#include <stdio.h>
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
  Car ford = {.make = "Ford", .model = "Aspire", .year = 2019, .color = "Red"};
  print_car(&ford);
  return 0;
}
void print_car(Car *car)
{
  printf("This %s model of car which is %s coloured was purchased in %d year and is made by %s company.", car->model, car->color, car->year, car->make);
}