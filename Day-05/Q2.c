#include<stdio.h>

int main(){
	int size,ele,i,even=0,odd=0	;
	
	printf("Enter the size of array ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter the elements of array ");

	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	int *ptr;
	ptr=arr;
	
	for(i=0;i<size;i++){
		
		if(*(ptr+i)%2==0){
			
           even++;
		}
		
		else
		odd++;

	}
	
	printf("Even = %d\n",even);
	printf("Odd = %d\n",odd);
		
	}