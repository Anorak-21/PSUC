#include<stdio.h>
int main() {
int A[10]={1,2,3,4,5,111,134,67},n=8,to_find,pos,i,found=0;
printf("Enter the number to find: ");
scanf("%d",&to_find);
for (i=0;i<n;i++) {
       if (A[i]==to_find) {
              found=1;
              pos=i+1;
              break; }
       }
if(found) printf("Found at %d positon \n",i+1);
else printf("Not Found \n");
}
