/*
Q.1 Write command line program to check if a string is palindrome or not.
 
Concepts Used 
Command Line Arguments 
Strings 
String Length ( strlen ) 
Looping ( for ) 
Conditional Statements ( if ) 
Character Comparison 

Step-by-Step Approach 
1. Accept string using command line argument. 
2. Find length of string using strlen() . 
3. Compare characters from both ends. 
4. If all characters match, string is palindrome. 
5. Otherwise, string is not palindrome. 
6. Display the result.
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	if(argc>1){
	
	int length;
	length=strlen(argv[1]);
	
	int i;
    char a[length+1];
	strcpy(a,argv[1]);

    char temp;

	for(i=0;i<length/2;i++)
	{
        temp=a[i];
	    a[i]=a[length-1-i];
	    a[length-1-i]=temp;

	}

	if(strcmp(a,argv[1])==0)
	printf("palindrome");
	else
	printf("not palindrome");
	
}
	return 0;
  
}
