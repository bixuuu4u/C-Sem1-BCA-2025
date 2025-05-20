//Swap Two Numbers

#include<stdio.h>

void main(){

int num1,num2,temp;
//printf("");
//scanf("%d",&);

printf("Enter First Num:");
scanf("%d",&num1);

printf("Enter Second Num:");
scanf("%d",&num2);

printf("Before Swap:Num1:%d,Num2:%d\n",num1,num2);

temp=num2;
num2=num1;
num1=temp;
printf("After Swap:Num1:%d,Num2:%d",num1,num2);

}