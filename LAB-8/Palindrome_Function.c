#include<stdio.h>
int main() {
char str[100];
printf("Enter word to check Palindrome: ");
gets(str);
if(IsPalin(str)) {printf("Palindrome");}
else  {printf("Not Palindrome");}
}

int IsPalin(char str[]) {
int i,len,n=0,match=1,ck=1;
char dest[100];
for(i=0;str[i]!='\0';i++);
i--;
for(;i>=0;i--,n++) {
       dest[n]=str[i];}
for(i=0;str[i]!='\0';i++) {
    if(str[i]!=dest[i])
        ck=0;}
return(ck);
}
