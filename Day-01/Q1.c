//WAP to accept two numbers from user and display the division

#include<stdio.h>

int main(){
int a,b;

printf("enter two numbers");
scanf("%d %d" ,&a,&b);

if(b==0){
printf("Cannot divide by zero");
}

else{
printf("%d",a/b);
}

}