// Allocate memory for a struct representing a Point with x and y
// coordinates, set some values, and then properly deallocate
// the memory using free.

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
  int x;
  int y;
} Point;
void input_point(Point *);
void show_point(Point *);
int main()
{
  Point *start = (Point *)malloc(sizeof(Point));
  Point *end = (Point *)malloc(sizeof(Point));
  if (start == NULL || end == NULL)
  {
    printf("Memory issues!");
  }

  printf("Enter Details:\n");
  input_point(start);
  input_point(end);

  printf("\nHere are your details:");
  show_point(start);
  show_point(end);

  free(start);
  free(end);
  start = end = NULL;
  return 0;
}

void input_point(Point *p)
{
  printf("Enter x:");
  scanf("%d", &p->x);
  printf("Enter y:");
  scanf("%d", &p->y);
}
void show_point(Point *p)
{
  printf("\nCoordinates:(%d,%d)", p->x, p->y);
}