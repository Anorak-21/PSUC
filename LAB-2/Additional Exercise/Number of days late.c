#include<stdio.h>
int main()
{

int a;
scanf("%d",&a);
if (a<=5)
       {printf("The fine is 0.50Rs");}
else if (a<=10)
       {printf("The fine is 1.00Rs");}
else if ((a>10) && (a<=30))
{printf("The fine is 5.00Rs");}
else
       {printf("The fine is 10.00Rs");}


}

