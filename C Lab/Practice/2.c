// Arithmetic Operation Using Switch Case
#include<stdio.h>
int main(){
int choice,num1,num2;
//printf("");
//scanf("%",&);

printf("Enter Two Numbers: ");
scanf("%d %d",&num1,&num2);
printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulos\nEnter Your Choice: ");
scanf("%d",&choice);

switch(choice){
case 1:
	printf("%d + %d = %d",num1,num2,num1+num2);
	break;
case 2:
	 printf("%d - %d = %d",num1,num2,num1-num2);
	break;
case 3:
	 printf("%d * %d = %d",num1,num2,num1*num2);
	break;
case 4: 
	if(num2!=0){
		printf("%d / %d = %.2f",num1,num2,(float)num1/num2);
	}else{
		printf("ZeroDivisionError");
}
break;
case 5:
	if(num2!=0){
		
printf("%d %% %d = %d",num1,num2,num1%num2);
	}else{
printf("Modulus by zero not possible");

}

break;
	 
default: 
	printf("Invalid Choice");break;
}

return 0;
}