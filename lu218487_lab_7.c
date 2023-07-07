#include <stdio.h>
#include <stdlib.h>

void swap(int *xP, int *yP){
    int temp = *xP;
    *xP = *yP;
    *yP = temp;
}

void bubbleSort(int arr[], int n){
    int i, j, swapCount;
    for(i = 0; i < n - 1; i++){
        swapCount = 0;
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr + j, arr + (j + 1));
                swapCount++;
            }
        }
        printf("On iteration %d, bubble swapped %d letters ", i + 1, swapCount);
        printf("for index %d\n", i);
    }
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

int main()
{
    int myarr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9;
    printf("Unsorted Array: \n");
    printArr(myarr, n);
    bubbleSort(myarr, n);
    printf("Sorted Array: \n");
    printArr(myarr, n);
    return 0;
}
