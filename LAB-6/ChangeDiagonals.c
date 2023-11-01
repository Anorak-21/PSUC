#include<stdio.h>
int main() {
int i,j,m=3,n=3,A[3][3]={1,2,3,4,5,6,7,8,9},temp=0,x;
x=m-1;
for(i=0;i<m;i++) {
       for(j=0;j<n;j++) {
        if(i==j) {
            temp=A[i][j];
            A[i][j]=A[i][x];
            A[i][x]=temp;
            x--;}
            }
            }
printf("The Result Matrix is: ");
for(i=0;i<m;i++) {
       printf("\n");
       for(j=0;j<n;j++)
       printf("%d\t",A[i][j]);}
    printf("\n");

 }
