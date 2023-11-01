#include<stdio.h>
int main() {
int i,counter=0;
char str[100];
printf("Enter a Statement: ");
gets(str);
printf("test ");
for(i=0;str[i]!='\0';i++) {
       if(str[i]==' ') counter++;
       }
counter++;
printf("Total number of words: %d",counter);
}











