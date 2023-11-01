#include<stdio.h>
int main() {
int A[10]={191,566,123,234,866,467},large=A[0],small=A[0],i,n=6;
for(i=0;i<n;i++) {
       if (A[i]>large) large=A[i];
       else if (A[i]<small) small=A[i];
       }
printf("The largest number in the Array is %d\nThe smallest number in the Array is %d",large,small);
}
