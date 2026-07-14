//Binary Search in Descending Order

#include<stdio.h>

int binarySearch(int arr[], int size, int key);

int binarySerach(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (key == arr[mid]) {
            return mid;
        }
   
        else if (key > arr[mid]) {
            right = mid - 1; 
        }
   
        else {
            left = mid + 1;  
        }
    }
    return -1;
}

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size]; 
    int i;
    int key;
    
    printf("Enter the elements of the array in descending order: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);

    int res = binarySerach(arr, size, key);

    if (res != -1) {
        printf("\n Key found at index %d\n", res);
    }
    else {
        printf("\n key is not found in array\n");
    }

    return 0;
}