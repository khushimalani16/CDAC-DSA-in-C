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