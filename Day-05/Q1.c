/*
Q.1 Search an Element in an Array Using Pointers

Concepts Used
Arrays
Pointers 
Pointer Arithmetic 
Looping ( for )
Conditional Statements ( if ) 
Linear Search 

Step-by-Step Approach
 1. Accept the size of the array.
 2. Accept array elements from the user.
 3. Accept the element to be searched. 
 4. Point a pointer to the first element of the array. 
 5. Traverse the array using the pointer. 
 6. Compare each element with the search element. 
 7. If found, display its position. 
 8. Otherwise, display "Element Not Found". 
 
*/

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
	
	printf("Enter the elment to search : ");
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
		printf("Element not found");
	}
		
	}