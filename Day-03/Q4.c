#include<stdio.h>

int divide (int a,int b,int*res){
	
	if(b!=0){
		*res=a/b;
		return 1;
	}
	else
	return 0;
}

int main(){
	
	int a,b,res;
	
	printf("Enter a and b : ");
	scanf("%d %d",&a,&b);
	
	if(divide(a,b,&res))
	printf("the result is: %d\n",res);
	else
	printf("cannot divide by zero!");
	
	return 0;
}