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
	

