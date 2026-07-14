/*
Q.2 Write a command line program to convert all vowels in a given string to uppercase. 

Concepts Used 
Command Line Arguments 
Strings 
Looping ( for ) 
Conditional Statements ( if ) 
Character Manipulation toupper() Function

Step-by-Step Approach 
1. Accept string using command line argument. 
2. Traverse each character of the string. 
3. Check whether the character is a vowel. 
4. Convert vowels to uppercase. 5. Display the modified string.
*/

#include<stdio.h>

int main(int argc,char*argv[]){
	
	if(argc>1){
	
	int i;
	char *ptr=argv[1];
	
	for(i=0;(ptr[i])!='\0';i++){
		if(((ptr[i])=='a')||((ptr[i])=='e')||((ptr[i])=='i')||((ptr[i])=='o')||((ptr[i])=='u')){
			argv[1][i]=(ptr[i])-32;
			
		}
	}
		printf("%s",argv[1]);
	}
	return 0;
	}
	

