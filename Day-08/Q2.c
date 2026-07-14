/*
Problem Statement 
Write a program to allocate memory for a 1D array at runtime to store marks (float) of 5 students. Accept marks from the user and print them on the console. 

Concepts Used 
 Dynamic Memory Allocation malloc() 
 free() 
 Pointers 
 Arrays  
 Looping ( for ) 
 User Input / Output 
 
 Step-by-Step Approach 
 1. Declare a pointer of type float . 
 2. Allocate memory for 5 float values using malloc() . 
 3. Check whether memory allocation is successful. 
 4. Accept marks of 5 students. 
 5. Store marks in dynamically allocated memory. 
 6. Display all marks. 
 7. Release allocated memory using free()
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float *marks=(float *)malloc(5*sizeof(float));
	if(marks== NULL)
	{
		printf("failed");
		return 1;
	}
	printf("\nEnter the marks of 5 students\n");
	
	int i;
	for(i=0;i<5;i++)
	{	
		printf("student %d:",i+1);
		scanf("%f",marks+i);
	}
	
	printf("\nAll marks:\n");
	for(i=0;i<5;i++)
	{	
		printf("student %d =%.2f\n",i+1,*(marks+i));
		
	}
	free(marks);
}