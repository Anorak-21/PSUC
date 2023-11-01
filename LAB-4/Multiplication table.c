#include<stdio.h>
int main() {
int i,n,x,z;

printf("How many times do you want to multiply ? ");
scanf("%d",&i);

printf("How many numbers do you want to multiply ? ");
scanf("%d",&x);

for (z=1;z<=x;z++) {
    for (n=1;n<=i;n++) {
            printf("%d x %d = %d\t",z,n,z*n);}

printf("\n"); }

}
