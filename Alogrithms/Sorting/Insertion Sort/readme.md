# Insertion Sort Algorithm

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it has several advantages:

- Simple implementation
- Efficient for small data sets or nearly sorted data
- Adaptive (efficient for data sets that are already partially ordered)

## How Insertion Sort Works

Insertion Sort works by repeatedly taking one element from the unsorted part and moving it into its correct position within the sorted part of the array.

Here are the key steps:

1. Start with the second element (index 1) and consider it as the key.
2. Compare the key element with the element to its left (one position at a time) in the sorted subarray.
3. If the key element is smaller, shift the larger element to the right.
4. Repeat steps 2 and 3 until you find the correct position for the key element.
5. Move to the next unsorted element (the next key) and repeat the process.
6. Continue until the entire array is sorted.

## Example

Let's illustrate Insertion Sort with an example. Consider an unsorted array:

```c
[5, 3, 1, 4, 2]
```
Start with the second element (key = 3).
Compare 3 with 5. Since 3 is smaller, shift 5 to the right.
Array becomes [3, 5, 1, 4, 2].
Compare 3 with 5. No shift is needed.
Move to the next key (1).
Compare 1 with 5. Shift 5 to the right.
Array becomes [3, 1, 5, 4, 2].
Compare 1 with 3. Shift 3 to the right.
Array becomes [1, 3, 5, 4, 2].
Compare 1 with 3. No shift is needed.
Move to the next key (4).
Compare 4 with 5. Shift 5 to the right.
Array becomes [1, 3, 4, 5, 2].
Compare 4 with 3. Shift 3 to the right.
Array becomes [1, 3, 4, 5, 2].
Compare 4 with 1. Shift 1 to the right.
Array becomes [1, 3, 4, 5, 2].
Compare 4 with 3. Shift 3 to the right.
Array becomes [1, 3, 4, 5, 2].
Compare 4 with 1. Shift 1 to the right.
Array becomes [1, 3, 4, 5, 2].
Compare 4 with 5. No shift is needed.
Move to the next key (2).
Compare 2 with 5. Shift 5 to the right.
Array becomes [1, 3, 4, 2, 5].
Compare 2 with 4. Shift 4 to the right.
Array becomes [1, 3, 2, 4, 5].
Compare 2 with 3. Shift 3 to the right.
Array becomes [1, 2, 3, 4, 5].
The sorted array is now [1, 2, 3, 4, 5].

Time Complexity
Insertion Sort has a time complexity of O(n^2) in the worst and average cases, where 'n' is the number of elements in the array. In the best case (when the array is already sorted), the time complexity is O(n).

Insertion Sort is efficient for small data sets or nearly sorted data but is not recommended for sorting large arrays or lists.

Implementation
You can find a C implementation of the Insertion Sort algorithm in the insertion_sort.c file in this repository.

Usage
To use Insertion Sort in your C program, you can include the insertion_sort.c file and call the insertionSort() function, passing your array and its size as arguments.

c
Copy code
#include <stdio.h>
#include "insertion_sort.c"

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
License
This project is licensed under the MIT License.

Feel free to use, modify, and distribute the code for educational and open-source purposes.

Enjoy exploring and learning about the Insertion Sort algorithm! If you have any questions or suggestions, please feel free to open an issue or reach out to the maintainers.

Happy coding!