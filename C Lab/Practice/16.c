//. Circle Area and Circumference

#include <stdio.h>
#define PI 3.1416
void compute(int r){
float area=PI*r*r;
float circum=2*PI*r;

printf("Area of Circle is:%.2fsqunit",area);
printf("Circumferece of Circle is:%.2funit",circum);

}


void main(){
int radius;
printf("Enter Circle Radius:");
scanf("%d",&radius);

compute(radius);

}