/*
Q.3 Command Line Calculator

Problem Statement 
Write a program to accept two operands and an operator as command line arguments. Perform the operation and print the result. Also perform error checking if arguments are not passed correctly. 

Concepts Used 
Command Line Arguments argc and argv 
Switch Statement 
Arithmetic Operators 
Conditional Statements ( if ) 
Error Handling atoi() 
Function 

Step-by-Step Approach  
1. Accept operands and operator through command line arguments. 
2. Check whether the correct number of arguments is passed. 
3. If arguments are missing, display an error message. 
4. Convert operands from string to integer using atoi() . 
5. Use a switch statement to identify the operator. 
6. Perform the corresponding operation. 
7. Display the result. 
8. Handle invalid operators appropriately.
*/

#include<stdio.h>

int main(int argc,char*argv[]){
	if(argc<4){
		printf("pass command line arguments correctly\n");
	}
	
	int n1= atoi(argv[1]);
	int n3= atoi(argv[3]);
	
	switch(argv[2][0]){
		case '+':
			printf("%d",n1+n3);
			break;
			
		case '-':
			printf("%d",n1-n3);
			break;
			
		case '*':
			printf("%d",n1*n3);
			break;
			
		case '/':
			if(n3==0){
				printf("cannot divide by zero");
			}
			else
			printf("%d",n1/n3);
			break;
			
		default:
			printf("Invalid operator");
	}
	
	return 0;
	
}
