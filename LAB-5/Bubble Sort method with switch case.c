#include<stdio.h>
int main() {
int A[10]={151,47,336,22346,534,55},n=6,i,j,temp;
char input;
printf("Please enter 'a' for ascending and 'd' descending : ");
fflush(stdin);
scanf("%c",&input);
switch(input) {
       case 'a' :
       for(i=0;i<n-1;i++) {
              for (j=0;j<n-1-i;j++) {
                     if (A[j]>A[j+1]) {
                            temp=A[j];
                            A[j]=A[j+1];
                            A[j+1]=temp;
                     }
              }
       }
       break;
       case 'd' :
       for(i=0;i<n-1;i++) {
              for (j=0;j<n-1-i;j++) {
                     if (A[j]<A[j+1]) {
                            temp=A[j];
                            A[j]=A[j+1];
                            A[j+1]=temp;
                     }
              }
       }
       break; }
for(i=0;i<n;i++) printf("%d\t",A[i]);
}
