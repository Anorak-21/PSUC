#include<stdio.h>
int main () {
int i,n,r,acc=0;
scanf("%d",&i);
n=i;
while (n>0) {
    r=n%10;
    n=n/10;
    acc=acc+r*r*r; }
if (acc==i) printf("Armstrong Number");
else printf("Not an Armstrong Number");


}







