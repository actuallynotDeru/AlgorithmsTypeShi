// Hoares iz cool
#include<stdio.h>
#include<stdlib.h>
#define MAX 7
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int i = low-1;
    int j = high + 1;
    int pivot = arr[low];
    while(1){
        do{
            i++;
        }while(arr[i] < pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i >= j) return j;
        swap(&arr[i], &arr[j]);
    }
}

int quicksort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr,low,high);
        quicksort(arr, low, pi);
        quicksort(arr, pi+1, high);
    }
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("[%d]: %d\n",i,arr[i]);
    }
}

int main(){
    int arr[MAX] = {6,7,1,2,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before:\n");
    printArr(arr,size);
    printf("After:\n");
    quicksort(arr,0,size-1);
    printArr(arr,size);
}