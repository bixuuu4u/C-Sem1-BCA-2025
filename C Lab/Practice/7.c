// Palindrome String Check

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isPalindrome(char str[]){
int length =strlen(str);
for(int i=0;i<length/2;i++){
if(str[i]!=str[length-1-i]){

return 0;
}
return 1;
}

}
int main(){
char text[100];
printf("Enter Text:");
scanf("%99s",text);
if(isPalindrome(text)){
printf("%s IS PALINDROME",text);
}else{
printf("%s IS NOT PALINDROME",text);

}

return 0;
}