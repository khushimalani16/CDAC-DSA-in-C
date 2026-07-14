// Optimized Bubble Sort Using Flag Variable

#include<stdio.h>

void bubbleSort(int arr[],int size){
    int swap;
    for(int itr=0; itr<size-1; itr++)
    {
        swap=0;
        for(int pos =0; pos<size-itr-1 ;pos++)
        {
            
            if(arr[pos]>arr[pos+1])
            {
                int temp=arr[pos];
                arr[pos]=arr[pos+1];
                arr[pos+1]=temp;

                swap=1;
            }
        }

        // If no swapping occurs, the array is already sorted.
        if(swap==0){
            break;
        }
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
    
    
    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting:\n");
    display(arr,size);

    bubbleSort(arr,size);
    printf("\nArray after sorting:\n");
    display(arr,size);

    return 0;

}