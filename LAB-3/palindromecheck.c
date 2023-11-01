#include<stdio.h>
int main() {
int n,l,x=0,a;
scanf("%d",&n);
a=n;
while(a>0) {
       l=a%10;
       a=a/10;
       x=x*10+l;
       }
if (x==n) {printf("Palindrome");}
else {printf("Not Palindrome");}
}
