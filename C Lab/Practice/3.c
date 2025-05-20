//Sum and Product of Digits of an Integer

#include<stdio.h>
int main(){
int sum=0,product=1,num;
//printf("");
//scanf("%d",&);
printf("Enter a number:");
scanf("%d",&num);

while(num!=0){
int digit=num%10;
sum+=digit;
product*=digit;
num/=10;
}

printf("\nSum of digits:%d",sum);
printf("\nProduct of digits:%d",product);


return 0;
}