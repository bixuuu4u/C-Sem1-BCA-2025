//Sum of Series S = 1 - 2 + 3 - 4 + ...

#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter n:");
scanf("%d",&n);

for(int i=0;i<=n;i++){
if(i%2==0){
sum-=i;
}else{
sum+=i;
}
}
printf("Sum Of Series:%d",sum);

return 0;
}