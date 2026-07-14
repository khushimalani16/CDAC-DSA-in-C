// Numeric Palidrome.

#include<stdio.h>

int main(){
	int num,original ,reverse=0,rem;
	printf("Enter a 5 digit number");
	scanf("%d",&num);
	
	original=num;
	
	while(num>0){
		rem=num%10;
		reverse = reverse*10+rem;
		num=num/10;
	}
	
		printf("%d \n",reverse);
	if(original==reverse){
		printf("palidrome series");
	}
	else{
		printf("not palidrome series");
	}
	
}