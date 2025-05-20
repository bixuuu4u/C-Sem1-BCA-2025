// Reverse a Number
#include<stdio.h>
int main()
{
//printf("");
//scanf("%d",&);

int num,copy,reverse;
printf("Enter a number:");
scanf("%d",&num);
copy=num;
while(copy!=0){
reverse=reverse*10+copy%10;
copy/=10;
}
printf("Original Number:%d\nReverse Number:%d",num,reverse);

return 0;
}