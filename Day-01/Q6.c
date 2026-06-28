#include<stdio.h>
int main(){
int num;
printf("enter the number");
scanf("%d",&num);
int i=1;
for(i=1;i<11;i++){
printf("%d X %d =%d \n" ,num,i,num*i);
}
}
