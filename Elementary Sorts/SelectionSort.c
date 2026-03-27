#include<stdio.h>
#define MAX 7

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[]){
    for(int i = 0; i < MAX; i++){
        printf("[%d]: %d\n", i,arr[i]);
    }
}
void SelectionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int temp;
        for(int j = i; j < size; j++){
            if(arr[i] > arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main(){
    int arr[MAX] = {3,1,2,6,8,6,7};
    printArray(arr);
    SelectionSort(arr, MAX);
    printArray(arr);
}