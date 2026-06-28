#include<stdio.h>

int main(){
	int size,ele,i,sum=0;
	
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
		
		sum=sum+*(ptr+i);

	}
	
	printf("Sum = %d\n",sum);

		
	}