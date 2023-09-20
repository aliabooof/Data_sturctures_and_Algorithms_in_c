# Selection Sort Algorithm

Selection Sort is a simple sorting algorithm that repeatedly selects the minimum element from an unsorted portion of the array and moves it to the beginning. The algorithm maintains two subarrays: one that is sorted and another that is unsorted.

## How Selection Sort Works

Selection Sort works by dividing the array into two parts: the sorted and the unsorted subarray. The sorted subarray starts as an empty array, and the unsorted subarray contains all elements.

Here are the key steps:

- Find the minimum element in the unsorted subarray.
- Swap the minimum element with the first element in the unsorted subarray.
- Move the boundary between the sorted and unsorted subarrays one element to the right.
- Repeat steps 1-3 until the entire array is sorted.

## Example

Let's illustrate Selection Sort with an example. Consider an unsorted array:

```c
[5, 3, 1, 4, 2]
```
	- First Pass:

	Find the minimum element in the unsorted subarray (1 in this case) and swap it with the first element.
The sorted subarray becomes [1], and the unsorted subarray becomes [5, 3, 4, 2].
Second Pass:

Find the minimum element in the unsorted subarray (2 in this case) and swap it with the second element.
The sorted subarray becomes [1, 2], and the unsorted subarray becomes [5, 3, 4].
Third Pass:

Find the minimum element in the unsorted subarray (3 in this case) and swap it with the third element.
The sorted subarray becomes [1, 2, 3], and the unsorted subarray becomes [5, 4].
Fourth Pass:

Find the minimum element in the unsorted subarray (4 in this case) and swap it with the fourth element.
The sorted subarray becomes [1, 2, 3, 4], and the unsorted subarray becomes [5].
Fifth Pass:

Find the minimum element in the unsorted subarray (5 in this case) and swap it with the fifth element.
The sorted subarray becomes [1, 2, 3, 4, 5], and the unsorted subarray becomes empty.
The sorted array is now [1, 2, 3, 4, 5].

Time Complexity
Selection Sort has a time complexity of O(n^2) in all cases (worst-case, average-case, and best-case), where 'n' is the number of elements in the array. It is not recommended for sorting large datasets but is useful for its simplicity and ease of implementation.

Implementation
You can find a C implementation of the Selection Sort algorithm in the selection_sort.c file in this repository.

Usage
To use Selection Sort in your C program, you can include the selection_sort.c file and call the selectionSort() function, passing your array and its size as arguments.

c
Copy code
#include <stdio.h>
#include "selection_sort.c"

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
License
This project is licensed under the MIT License.

Feel free to use, modify, and distribute the code for educational and open-source purposes.

Enjoy exploring and learning about the Selection Sort algorithm! If you have any questions or suggestions, please feel free to open an issue or reach out to the maintainers.

Happy coding!