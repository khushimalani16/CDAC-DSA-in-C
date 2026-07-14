//Nth term of fibonacci using Recursion

#include<stdio.h>

int fibbo(int n){
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fibbo(n-1)+fibbo(n-2);
	
}

int main(){
	int n,y;
	printf("enter the nth term ");  
	scanf("%d",&n);
	y=fibbo(n);
	printf("The nth term of fibbo is %d",y);
}