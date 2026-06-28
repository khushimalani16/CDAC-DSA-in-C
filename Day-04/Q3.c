#include<stdio.h>

void reverse(int a[],int size){
	int i,temp;
	
	for (i = 0; i < size / 2; i++) {
        temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
	
}

int main(){
	int size,i,revarr;
	printf("enter the size of array");
	scanf("%d",&size);
	
	int a[size];
	
	printf("enter the elements of array");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	reverse(a,size);
	printf("The reverse array is ");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
	
	
}