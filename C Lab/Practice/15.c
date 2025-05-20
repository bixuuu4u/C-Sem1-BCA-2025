//Modify Two Variables Using Pointers

#include<stdio.h>

void modify(int *a,int *b){
*a+=10;
*b*=4;
}

void main(){

int x,y;
printf("Enter Two Numbers: ");
scanf("%d %d",&x,&y);

printf("Before Modify:\nx:%d,y:%d\n",x,y);
modify(&x,&y);
printf("After Modify:\nx:%d,y:%d",x,y);

}