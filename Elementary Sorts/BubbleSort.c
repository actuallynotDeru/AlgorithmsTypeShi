#include<stdio.h>
#define MAX 7

void swap(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
void bubbleSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j+1 < size; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("[%d]: %d\n",i,arr[i]);
    }
}

int main(){
    int arr[MAX] = {4,2,8,5,1,4,9};
    int size = MAX;
    printf("Before: \n");
    printArr(arr, size);
    bubbleSort(arr, size);
    printf("After: \n");
    printArr(arr, size);
}