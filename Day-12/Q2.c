//Write a program to sort an array in descending order using the Insertion Sort algorithm
#include<stdio.h>

void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key>arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1]=key;
    }
}

void display(int arr[],int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size]; 
    int i;
    
    printf("Enter the elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting:\n");
    display(arr, size);

    insertionSort(arr, size);

    printf("\nArray after sorting:\n");
    display(arr, size);

    return 0;
}