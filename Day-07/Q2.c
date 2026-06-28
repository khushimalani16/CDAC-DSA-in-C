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