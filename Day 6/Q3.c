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


