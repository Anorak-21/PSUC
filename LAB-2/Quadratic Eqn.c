#include<stdio.h>
#include<math.h>
int main () {

float a,b,c,D,sol1,sol2;
int z;

printf("Enter equation coefficients: ");
scanf("%f%f%f",&a,&b,&c);
D=(b*b)-(4*a*c);
if (D>=0) z=0;
if (D<0) z=1;

switch(z) {
       case 0:
              sol1=(-b+sqrt(D))/(2*a);
              sol2=(-b-sqrt(D))/(2*a);
              break;
       case 1:
              printf("Unreal roots");
              break;
              }
printf("The roots of eqn are %d and %d",(int)sol1,(int)sol2);

}
