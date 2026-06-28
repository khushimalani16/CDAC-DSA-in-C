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
	printf("enter a string ");
	scanf("%s",st);
	printf("enter the character to be searched ");
	scanf(" %c" ,&ch);
	count=noOfOccourence(st,ch);
	printf("The count of %c is %d",ch,count);
	
	return 0;
}