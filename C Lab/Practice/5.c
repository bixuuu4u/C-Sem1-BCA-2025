//Sum of Series S = 1 + 1/2 + 1/3 + ...

#include<stdio.h>
int main(){

int num;
float sum=0.0;
printf("Enter Number:");
scanf("%d",&num);

for(int i=1; i<=num;i++){
sum+=1.0/i;
}
printf("Sum of series:%.2f",sum);

return 0;
}