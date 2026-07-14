/*
Q.1 Write functions to calculate addition, subtraction and multiplication of two 3 × 3 matrices.

Problem Statement 
Write separate functions to perform addition, subtraction, and multiplication of two 3 × 3 matrices and display the resultant matrix.

Concepts Used 
Functions Two-Dimensional Arrays (2D Arrays) 
Nested Loops ( for ) 
Matrix Addition 
Matrix Subtraction 
Matrix Multiplication 
Arithmetic Operators 

Step-by-Step Approach 

Matrix Addition 
1. Declare two 3 × 3 matrices A and B. 
2. Traverse both matrices using nested loops. 
3. Add corresponding elements of A and B. 
4. Store the result in matrix R. 
5. Display the resultant matrix. 

Matrix Subtraction 
1. Traverse both matrices using nested loops. 
2. Subtract corresponding elements of B from A. 
3. Store the result in matrix R. 
4. Display the resultant matrix. 

Matrix Multiplication 
1. Traverse rows of matrix A.
 2. Traverse columns of matrix B. 
 3. Multiply corresponding elements. 
 4. Add the products to obtain a single element of the result matrix. 
 5. Store the value in matrix R. 
 6. Repeat for all rows and columns. 
 7. Display the resultant matrix.
*/


#include<stdio.h>

void addtion(int a[3][3],int b[3][3])
{
		int i,j,sum[3][3];
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
		
	}

	printf("\nAddition\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sum[i][j]);
		}
		printf("\n");
	}
}

void subtraction(int a[3][3],int b[3][3])
{	
	int i,j,sub[3][3];
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
		
	}
	
	printf("\nSubtraction\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sub[i][j]);
		}
		printf("\n");
	}
	
	
}

void multiplication(int a[3][3],int b[3][3])
{
		int i,j,k,mul[3][3];
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			mul[i][j]=0;
			for(k=0;k<3;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
		
	}

	printf("\nMultiplication\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",mul[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int a[3][3],b[3][3],i,j;
	printf("\nEnter the matrix1 \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
	
	printf("\nEnter the matrix2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	
	}
	
	printf("\nMatrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	
	addtion(a,b);
	subtraction(a,b);
	multiplication(a,b);
	
}