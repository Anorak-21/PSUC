#include<stdio.h>
int main() {
int a,b,c,min1;
printf("Enter 3 nos ");
scanf("%d%d%d",&a,&b,&c);
min1=(a<b)&&(a<c)? a:((b<a)&&(b<c)?b:c);
printf("%d",min1);




}
