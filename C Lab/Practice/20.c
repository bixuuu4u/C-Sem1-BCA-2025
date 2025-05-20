// Copy Content of One File to Another

#include <stdio.h>

int main(){
FILE *src,*dst;
char srcfile[100],dstfile[100];
char buffer[1024];

printf("Enter Source File Name:");
scanf("%99s",&srcfile);

printf("Enter Destination File Name:");
scanf("%99s",&dstfile);

src=fopen(srcfile,"r");
if(src==NULL){
printf("Error Opening %s File",srcfile);
return 0;
}
dst=fopen(dstfile,"w");
if(src==NULL){
printf("Error Creating %s File",srcfile);
return 0;
}

while(fgets(buffer,1024,src)){
fputs(buffer,dst);
}
printf("File copied successfully.\n");

fclose(src);
fclose(dst);
return 0;
}