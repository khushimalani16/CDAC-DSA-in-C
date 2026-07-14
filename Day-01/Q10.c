//Nth term of fibonacci
#include<stdio.h>
int main(){

int n,i;
int a=0,b=1,c;
printf("enter a number");
scanf("%d",&n);

printf("%d",a);
printf("%d",b);


for(i=3;i<=n;i++){
c=a+b;
printf("%d",c);
a=b;
b=c;

}


}