/*
Q.2 Count Even and Odd Numbers Using Pointers 

Concepts Used  
Arrays 
Pointers 
Pointer Arithmetic 
Looping ( for ) 
Conditional Statements ( if ) 
Modulus Operator ( % )  

Step-by-Step Approach 
1. Accept the size of the array. 
2. Accept array elements from the user. 
3. Initialize counters for even and odd numbers. 
4. Point a pointer to the first element of the array. 
5. Traverse the array using the pointer. 
6. Check whether each element is even or odd. 
7. Increment the respective counter. 
8. Display the total count of even and odd numbers.
*/

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