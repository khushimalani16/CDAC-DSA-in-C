#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	if(argc>1){
	
	int length;
	length=strlen(argv[1]);
	
	int i;
    char a[len+1];
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
