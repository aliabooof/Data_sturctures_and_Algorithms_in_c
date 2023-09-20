# Bubble Sort Algorithm

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## How Bubble Sort Works

Bubble Sort works by comparing adjacent elements in the array and swapping them if they are in the wrong order. This process is repeated until no swaps are needed, indicating that the array is sorted. Here are the key steps:

1. Start from the first element (index 0) and compare it with the next element (index 1).
2. If the first element is greater than the second element, swap them.
3. Move to the next pair of adjacent elements and repeat step 2.
4. Continue this process until you reach the end of the array.
5. After one pass through the array, the largest element will have "bubbled up" to the end of the array.
6. Repeat steps 1-5 for the remaining unsorted portion of the array (excluding the last element, which is already in its correct position).
7. Continue this process until no more swaps are needed.

## Example

Let's illustrate Bubble Sort with an example. Consider an unsorted array:

```c
[5, 3, 1, 4, 2]
```
###First Pass:

Compare 5 and 3. Swap them because 5 > 3.
Compare 5 and 1. Swap them because 5 > 1.
Compare 5 and 4. Swap them because 5 > 4.
Compare 5 and 2. Swap them because 5 > 2.
The largest element (5) is now at the end of the array.
###Second Pass:

Compare 3 and 1. Swap them because 3 > 1.
Compare 3 and 4. No swap is needed because 3 < 4.
Compare 4 and 2. Swap them because 4 > 2.
The second largest element (4) is now in the second-to-last position.
###Third Pass:

Compare 3 and 1. Swap them because 3 > 1.
Compare 3 and 2. Swap them because 3 > 2.
The third largest element (3) is now in the third-to-last position.
###Fourth Pass:

Compare 1 and 2. No swap is needed because 1 < 2.
The fourth largest element (2) is now in the fourth-to-last position.
###Fifth Pass:

No swaps are needed, indicating that the array is sorted.
The sorted array is now ```c [1, 2, 3, 4, 5] ```.

##Time Complexity
Bubble Sort has a time complexity of O(n^2) in the worst and average cases, where 'n' is the number of elements in the array. In the best case (when the array is already sorted), the time complexity is O(n).

Bubble Sort is not recommended for sorting large arrays or lists due to its inefficiency, but it is a straightforward sorting algorithm for educational purposes and small datasets.

##Implementation
You can find a C implementation of the Bubble Sort algorithm in the bubble_sort.c file in this repository.

##Usage
To use Bubble Sort in your C program, you can include the bubble_sort.c file and call the bubbleSort() function, passing your array and its size as arguments.

```c
Copy code
#include <stdio.h>
#include "bubble_sort.c"

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
```
##License
This project is licensed under the MIT License.

Feel free to use, modify, and distribute the code for educational and open-source purposes.

Enjoy exploring and learning about the Bubble Sort algorithm! If you have any questions or suggestions, please feel free to open an issue or reach out to the maintainers.

Happy coding!






