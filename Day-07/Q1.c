/*
.1 Count Occurrences of a Character (Case-Insensitive)

 Problem Statement 
 Write a function to return the number of occurrences of a given character in a string irrespective of case. 
 
 Concepts Used 
 Functions 
 Strings Character 
 Arrays 
 Looping ( for ) 
 Conditional Statements ( if ) 
 Character Functions ( tolower() ) 
 Case-Insensitive Comparison 
 
 Step-by-Step Approach 
 1. Accept a string from the user. 
 2. Accept a character to be searched. 
 3. Convert the search character to lowercase. 
 4. Traverse the string using a loop. 
 5. Convert each character of the string to lowercase. 
 6. Compare it with the search character. 
 7. If matched, increment the count. 
 8. Return and display the final count. 
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int noOfOccourence(char st[],char ch){
	
	int i=0,count=0;
	while(st[i]!='\0'){
		if(tolower(st[i])==tolower(ch)){
			count++;
		}
		i++;
	}
	return count;
}

int main(){
	char st[100];
	char ch;
	int count;
	printf("Enter a string ");
	scanf("%s",st);
	printf("Enter the character to be searched ");
	scanf(" %c" ,&ch);
	count=noOfOccourence(st,ch);
	printf("The count of %c is %d",ch,count);
	
	return 0;
}