#include<stdio.h>
int main()
{
float R,Area,Volume;
printf("Enter radius of sphere: ");
scanf("%f",&R);
Area=4*3.14*R*R;
Volume=(4*3.14*R*R*R)/3;
printf("The Surface Area of the sphere is: %f\n",Area);
printf("The Volume the sphere is: %f",Volume);


}

