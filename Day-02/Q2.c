//print given number of terms in fibonacci Sries

#include<stdio.h>

void fibbo(int n){
int a=0,b=1,c,i;
printf("%d \t",a);
printf("%d \t",b);
for(i=2;i<n;i++){
c=a+b;
printf("%d \t",c);
a=b;
b=c;
}
}

int main(){
int n;
printf("enter the number of terms : ");
scanf("%d",&n);
fibbo(n);

}
