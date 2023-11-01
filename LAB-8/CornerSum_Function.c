#include<stdio.h>
int A[3][3]={1,2,3,4,5,6,7,8,9};

int main(){
int a=3,b=3;
printf("The sum of Corner elements is %d ",CornerSum(a,b));}

int CornerSum(int m,int n) {
int sum;
sum=A[0][0]+A[0][m-1]+A[n-1][0]+A[m-1][n-1];
return(sum);
}















