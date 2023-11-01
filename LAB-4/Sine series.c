#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
float x,n,sinx=0.0,i,j=0.0,k,fact=1.0;
printf("Enter the number of iterations\n");
scanf("%f",&n);
printf("Enter the angle in degrees\n");
scanf("%f",&x);
x*=(3.14159265358979323846264338327950288419716939937510/180);

for(i=1;i<=(n*2);i=i+2) {

       for(k=1;k<=i;k++) {
       fact=fact*k;
       }
sinx+=pow(-1,j)*(pow(x,i)/fact);
j++;
fact=1;
}
printf("The value of function= %f",sinx);
}
