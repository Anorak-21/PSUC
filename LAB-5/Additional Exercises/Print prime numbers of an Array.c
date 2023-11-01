#include<stdio.h>
int main() {
int A[10]={3,11,5,12,15},n=5,i,isprime=1,j;
for(i=0;i<n;i++) {
       isprime=1;
       for(j=2;j<A[i];j++) {
              if (A[i]%j==0) isprime=0;}
       if (isprime) printf("%d\t",A[i]);
       }
}
