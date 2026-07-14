/*Write a program to accept n integers in an array and find the sum of all elements using pointers.

 Concepts Used 
 Arrays 
 Pointers 
 Pointer Arithmetic 
 Looping ( for ) 
 Arithmetic Operators 
 
 Step-by-Step Approach 
 1. Accept the size of the array. 
 2. Accept array elements from the user. 
 3. Initialize sum = 0 . 
 4. Point a pointer to the first element of the array. 
 5. Traverse the array using the pointer. 
 6. Add each element to sum . 
 7. Display the final sum.
 */

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