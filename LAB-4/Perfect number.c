#include<stdio.h>
int main() {
int a,acc=0,i;
scanf("%d",&a);
for(i=1;i<a;i++) {
       if (a%i==0) acc=acc+i; }

if (acc==a) printf("Perfect number");
else printf("Not a Perfect number");





}










