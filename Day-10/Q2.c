/*
Q.2 Allocate Memory Dynamically for a 2D Array 

Problem Statement 
Write a program to allocate memory dynamically for a two-dimensional array, accept elements from the user, and display the array. 

Concepts Used 
Dynamic Memory Allocation 
Double Pointer ( ** ) 
malloc() free() 
Nested Loops ( for ) 
Arrays Pointers 
User Input / Output 

Step-by-Step Approach 
1. Accept the number of rows and columns. 
2. Allocate memory for row pointers using malloc() . 
3. Allocate memory for each row dynamically. 
4. Accept the array elements from the user. 
5. Display the matrix. 
6. Free memory allocated for each row. 
7. Free the memory allocated for row pointers.

*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int rows,cols;
	int **arr;
	
	printf("Enter the number of rows ");
	scanf("%d",&rows);
	
	printf("Enter the number of cols ");
	scanf("%d",&cols);
	
	arr=(int**)malloc(rows*sizeof(int*));
	if(arr==NULL){
		printf("Memory allocation failed for rows.\n");
		return 1;
	}
	
	int i,j;
	for(i=0;i<rows;i++){
	
	arr[i]=(int*)malloc(cols*sizeof(int));
	if(arr[i]==NULL){
		printf("Memory allocation failed for rows.\n");
		return 1;
	}
}

printf("Enter the elements \n");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		scanf("%d",&arr[i][j]);
	}
}

printf("Display the elements \n");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("%d\t",arr[i][j]);
	}
	printf("\n");
}

for(i=0;i<rows;i++){
	free(arr[i]);
}

free(arr);

return 0;
}
