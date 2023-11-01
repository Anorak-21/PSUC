#include<stdio.h>
int main() {

int m,n,p,q,i,j,k;
int A[100][100],B[100][100],C[100][100];

printf("Enter the order of first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the order of second matrix\n");
scanf("%d%d",&p,&q);

if(n!=p){
    printf("Matrix is cannot be multiplied\n");
    }
else {
printf("Enter the elements of Matrix 1:\n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&A[i][j]);
            }
        }

    printf("Enter the elements of Matrix 1:\n");
    for (i=0;i<p;i++) {
        for (j=0;j<q;j++) {
            scanf("%d",&B[i][j]);
            }
        }

        for(i=0;i<m;i++) {
            for(j=0; j<q;j++) {
                C[i][j]=0;
                for(k=0;k<p;k++) {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }

    printf("The product of the two matrices is:-\n");
    for(i=0;i<m;i++) {
            for(j=0;j<q;j++) {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }

}
