#include <stdio.h>
#define MAX 5

void insertionSort(int arr[], int size){
    int key, idx;
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j;
        for(j = i-1; j >= 0 && arr[j] > key; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("[%d]: %d\n", i,arr[i]);
    
}

int main() {
    int arr[MAX] = {11, 67, 9, 911, 69};
    int n = MAX;

    printf("Before: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("After:  \n");
    printArray(arr, n);

    return 0;
}