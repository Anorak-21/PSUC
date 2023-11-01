#include<stdio.h>
int main() {
int i,len,n=0,match=1;
char str[100],dest[100];
printf("Enter a Word: ");
gets(str);
for(i=0;str[i]!='\0';i++);
i--;
for(;i>=0;i--,n++) {
       dest[n]=str[i];}
for(i=0;str[i]!='\0';i++) {
       if(str[i]!=dest[i]) match=0;}
if(match) printf("Palindrome ");
else printf("Not a Palindrome ");

}
