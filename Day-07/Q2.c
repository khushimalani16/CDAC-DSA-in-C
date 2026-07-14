/*
Q.2 First Non-Repeating Character 

Problem Statement
 Write a program to find the first non-repeating character in a given string. 
 
Concepts Used
Strings 
Nested Loops 
Character Comparison 
Conditional Statements ( if ) 
Frequency Counting 

Step-by-Step Approach 
1. Accept a string from the user. 
2. Traverse each character of the string. 
3. Count the occurrences of the current character in the entire string. 
4. If the count is 1, that character is the first non-repeating character. 
5. Display the character and stop the search. 
6. If no non-repeating character exists, display -1 .
*/

#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	

	printf("enter a string ");
	scanf("%s",s);
	
	int i,j,count;
	for(i=0;s[i]!='\0';i++){
		count=0;
		for(j=0;s[j]!='\0';j++){
			if(s[i]==s[j]){
			
				count++;
						
			}
		}
		if(count ==1){
		printf("1st non repeating character is %c",s[i]);
		return 0; 
	}			
		
	}
		printf("-1");
		
	
	
	return 0;
}