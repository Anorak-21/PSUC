#include<stdio.h>
int main() {

int primeno=0,compositeno=0,i,x=2,isprime=1;
do {
printf("Enter numbers, and enter -1 to exit: ");
scanf("%d",&i);
for(x=2;x<i;x++) {
    if (i%x==0) isprime=0; }
if (i==0 || i==1 || i==-1) continue;
else if (isprime==1 && i!=-1) primeno++;
else compositeno++;
} while (i!=-1);

printf ("Total no of Composite no: %d , Total no of Prime no: %d ",compositeno,primeno);
}
