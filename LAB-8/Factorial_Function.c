#include<stdio.h>

int main() {
int n,r;
float ncr=0;
printf("Enter numbers whose nCr you want to find ");
scanf("%d%d",&n,&r);
ncr=Fact(n)/(Fact(r)*Fact(n-r));
printf("%f",ncr);
}

int Fact(int n){
int i,fact=1;
for(i=1;i<=n;i++) fact*=i;
return (fact);
}
