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
