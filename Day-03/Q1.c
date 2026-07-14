//4 function calculator

#include<stdio.h>

int calculate(int a,int b, char op){
	
	
	switch(op){
		
		case '+' :
			return a+b;
			
			
		case '-' :
			return a-b;
			
			
		case '*' :
			return a*b;
			
			
		case '/' :
			if(b!=0)
			return a/b;
			else
			printf("cannot divide by 0\n");
			return 0;
			
			
		default:
			printf("Invalid operend\n");
			return 0;
		
	}
	
}


int main(){
	
	int a,b,result;
	char op;
	
	printf("Enter a and b : ");
	scanf("%d %d",&a,&b);
	
	printf("Enter operend (+ - * /): ");
	scanf(" %c",&op);
	
	result=calculate(a,b,op);
	
	printf("The result is %d",result);
	
	return 0;
	
}