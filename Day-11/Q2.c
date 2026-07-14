//Linear Search to Find the Nth Occurrence
#include<stdio.h>

int linearSearch(int arr[], int size, int key, int occurrence);

int linearSearch(int arr[],int size,int k,int n){
    int i,count=0;
    for(i=0;i<size;i++){
        if(k==arr[i]){
            count++;          
        }
        if(count==n){
            return i;
        }
            
    }

    return -1;

}


int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size]; 
    int key;
    int occurrence;
    
    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);

    printf("\nEnter the occurrence: ");
    scanf("%d", &occurrence);

    int res = linearSearch(arr, size, key,occurrence);

    if (res != -1) {
        printf("\nKey found at index %d\n", res);
    }
    else {
        printf("Key is not found\n");
    }

    return 0;
}