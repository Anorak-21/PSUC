#include<stdio.h>
#include<math.h>
int main() {
int i,j,m=3,n=3,A[3][3]={1,2,3,4,5,6,7,8,9},trace=0;
float norm=0;
for(i=0;i<m;i++) {
       for(j=0;j<n;j++) {
              norm+=A[i][j];
              if(i==j) {trace+=A[i][j];}
              }
       }
norm=sqrt(norm);
printf("The norm is %f\n",norm);
printf("The trace is %d",trace);

}
