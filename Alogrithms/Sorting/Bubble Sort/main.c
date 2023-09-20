#include <stdio.h>
#include "Bubble_Sort.h"

int main() {
    int arr[] = {5, 1, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
