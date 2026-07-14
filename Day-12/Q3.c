//Q.3 Implement Binary Search Algorithm Using Recursion

#include<stdio.h>

int binarySearch(int arr[], int left,int right, int key) {
   

    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;

    if (key == arr[mid]) {
        return mid;
    }
   
    else if (key < arr[mid]) {
        return binarySearch(arr,left, mid-1,key);
    }
   
    else {
        return binarySearch(arr,mid+1, right,key);
    }
    }
    


int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size]; 
    int i, key;
    int left=0,right=size-1;
    
    printf("Enter the elements of the array in ascending order:");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);

    int res = binarySearch(arr, left,right ,key);

    if (res != -1) {
        printf("\nElement found at index %d\n", res);
    }
    else {
        printf("\n Element is not found in array\n");
    }

    return 0;
}