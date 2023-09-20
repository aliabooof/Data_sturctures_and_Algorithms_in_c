#include <stdio.h>
#include "insertion_sort.h"

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
