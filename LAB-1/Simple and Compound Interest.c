#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,si,ci,ci_formula;
printf("Enter Principle: ");
scanf("%f",&p);
printf("Enter Rate: ");
scanf("%f",&r);
printf("Enter Time: ");
scanf("%f",&t);
si=p*r*t/100;
ci_formula=(1+(r/100));
ci=p*(pow(ci_formula,t))-p;
printf("The simple interest is: %f",si);
printf("\nThe compound interest is: %f",ci);




}

