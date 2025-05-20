//. Factors of a Number

#include<stdio.h>

void main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
for (int i=2;i<n;i++){
if(n%i==0){printf("Factor: %d\n",i);}
}

}