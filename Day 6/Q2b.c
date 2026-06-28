#include<stdio.h>

int main(int argc,char*argv[]){
	
	if(argc>1){
	
	
	char *ptr=argv[1];
	
	while(*ptr!='\0'){
		if((*ptr=='a')||(*ptr=='e')||(*ptr=='i')||(*ptr=='o')||(*ptr=='u')){
			*ptr=*ptr-32;
			
		}
		ptr++;
	}
		printf("%s",argv[1]);
	}
	return 0;
	}
	

