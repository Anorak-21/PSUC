#include<stdio.h>
int main()  {
int i,len_del,len_str,j,n,found=0,f,temp,x;
char str[100]="I AM STUDYING IN MIT TO BE DELETED",del[100]="STUDYING";

for(i=0;del[i]!='\0';i++);
len_del=i;
for(i=0;str[i]!='\0';i++);
len_str=i;
for(i=0;i<len_str;i++) {
    if(str[i]==del[0]) {
              for(j=0;j<len_del+1;j++) {
                    if(del[j]!=str[i+j]){
                            break;}
                    if(j+1==len_del){
                        found=1;
                        f=i;
                        }
                        }
                        }
                        }

if(found) printf("Found at %d\n",f);
else printf("Not Found");


for(i=f;i<len_str-len_del;i++) {
       str[i]=str[i+len_del];}
str[len_str-len_del]='\0';
puts(str);
}

