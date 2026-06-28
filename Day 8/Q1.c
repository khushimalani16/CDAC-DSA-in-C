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