#include<stdio.h>

int main(){
	int size,ele,i;
	printf("Enter the size of array ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter the elements of array ");

	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("enter the elment to search : ");
	scanf("%d",&ele);
	
	int *ptr;
	ptr=arr;
	
	int flag=0;
	
	for(i=0;i<size;i++){
		
		if(*(ptr+i)==ele){
			
            flag=1;
            printf("Element found at position %d ",i);
            break;
		}

	}
	
	if(flag==0){
		printf("element not found");
	}
		
	}