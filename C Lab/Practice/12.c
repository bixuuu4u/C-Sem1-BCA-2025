//Array Operations

#include<stdio.h>
#include<stdlib.h>

void main(){
int size,sum=0;
printf("Enter Array Size: ");
scanf("%d",&size);

int *arr=NULL;
arr= (int *) malloc(size*sizeof(int));

//INPUT
for(int i=0;i<size;i++){
printf("Enter %dth element: ",i+1);
scanf("%d",&arr[i]);
}

//EVEN
printf("EVEN: ");
for(int i=0;i<size;i++){	
if(arr[i]%2==1){

printf("%d ",arr[i]);
}
}
printf("\n");



//ODD
printf("ODD: ");
for(int i=0;i<size;i++){	
if(arr[i]%2==0){

printf("%d ",arr[i]);
}
}
printf("\n");

//SUM & AVG
for(int i=0;i<size;i++){
sum+=arr[i];
}
float avg=(float)sum/size;
printf("Sum of all elements:%d\n",sum);
printf("Avg:%.2f\n",avg);
printf("\n");
//MAX AND MIN

int max=arr[0] ,min=arr[0];
for(int i=1;i<size;i++){	
if(arr[i]>max){
max=arr[i];
}
if(arr[i]<min){
min=arr[i];
}
}
printf("Max is :%d\n",max);
printf("Min is %d:\n",min);


//Reverse display
printf("Reverse Order");
for(int i=size-1;i>=0;i--){	

printf("%d ",arr[i]);

}



}