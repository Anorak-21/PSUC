#include<stdio.h>
int main() {

int i,j,m,n,A[100][100],sym=1;
printf("enter dimensions of matrix: ");
scanf("%d%d",&m,&n);
printf("enter the elements: ");

for(i=0;i<m;i++) {
       for(j=0;j<n;j++)
       scanf("%d",&A[i][j]);}
for(i=0;i<m;i++) {
       for(j=0;j<n;j++) {
       if (A[i][j]!=A[j][i]) {
              sym=0;}
       }
       }

if(sym==1) printf("Symmetric matrix");
else printf("Not a symmetric matrix");
}
