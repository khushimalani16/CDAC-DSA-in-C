/*
Q.3 Write a command line program to check if a given string is present in another string. 

Concepts Used 
Command Line Arguments 
Strings 
String Functions ( strstr ) 
Conditional Statements ( if ) 

Step-by-Step Approach 
1. Accept two strings using command line arguments. 
2. Search first string in second string. 
3. Use strstr() function. 
4. If found, print "Yes". 
5. Otherwise, print "No".

*/

#include<stdio.h>
#include<string.h>

int main(int argc,char*argv[]){
	if(argc>2){
		char *ptr1=argv[1];
		char *ptr2=argv[2];
		
		 if(strstr(ptr2,ptr1)!=NULL)
		 printf("Yes");
		 else
		 printf("No");
	}
	return 0;
}


