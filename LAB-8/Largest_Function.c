#include<stdio.h>

int main(){
int B[]={94,64,784,25,28},n=5;
printf("The largest number in the array is %d ",Largest(B,n));
}

int Largest(int A[],int n){
int i,large=A[0];
for(i=0;i<n;i++) {
       if (A[i+1]>large) large=A[i+1];}
return(large);
}





