#include<stdio.h>
int main() {
int A[10]={1,2,3,4,5},n=5,ele,pos,i;
printf("Enter the element : ");
scanf("%d",&ele);
printf("Enter the position : ");
scanf("%d",&pos);
pos-=1;
for(i=n;i>=pos;i--) {
       A[i]=A[i-1];}
A[pos]=ele;
n++;
for(i=0;i<n;i++) printf("%d\t",A[i]);
}
