#include<stdio.h>

int main(){
	
	int arr[5];
	int i,sum=0,avg=0;
	
	for(i=0;i<5;i++){
		printf("Enter the marks of subject %d ",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		
	}
	avg=sum/5;
	printf("The average is %d ",avg);
	return 0;
	
}