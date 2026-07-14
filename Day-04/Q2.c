//Write two different functions to find maximum and minimum of the array elements.

#include<stdio.h>

int arrmax(int a[],int size){
	int i;
	int max=a[0];
	for(i=1;i<size;i++){
		if(a[i]>a[0])
		max=a[i];
	}
	
	return max;
}

int arrmin(int a[],int size){
	int i;
	int min=a[0];
	for(i=1;i<size;i++){
		if(a[i]<a[0])
		min=a[i];
	}
	return min;
}

int main(){
	int size,i,max, min;
	printf("enter the size of array");
	scanf("%d",&size);
	
	int a[size];
	
	printf("enter the elements of array");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	max=arrmax(a,size);
	min=arrmin(a,size);
	
	printf("The maximum element is %d \n",max);
	printf("The minimum element is %d \n ",min);
	
	
	return 0;
	
	
}