//Print Star Triangle

#include<stdio.h>

void main(){

int lines;
printf("Enter number of lines: ");
scanf("%d", &lines);
for (int i = 1; i <= lines; i++) {
     for (int j = 1; j <= 2*i - 1; j++)
        printf("*");
     printf("\n");
    }

}