# Merge Sort Algorithm

Merge Sort is a popular, efficient, and stable sorting algorithm. It uses a divide-and-conquer approach to divide the unsorted list into `n` sublists, each containing one element, and then repeatedly merges sublists to produce new sorted sublists until there is only one sublist remaining.

## How Merge Sort Works

![image](https://github.com/aliabooof/Data_sturctures_and_Algorithms_in_c/assets/62174374/bd4035b9-ef6f-49ed-8c35-6c1bf2a54216)

Merge Sort works as follows:

1. Divide the unsorted list into `n` sublists, each containing one element.
2. Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining.

Merging two sublists involves comparing elements from each sublist and arranging them in sorted order. This process continues until all sublists are merged into one, which is the sorted list.

## Example

Let's illustrate Merge Sort with an example. Consider an unsorted array:

```c
[5, 3, 1, 4, 2]
```
### Divide Phase:

The array is divided into sublists: [5], [3], [1], [4], [2].

### Conquer Phase (Merging Sublists):

- Merge [5] and [3] to get [3, 5].
- Merge [1] and [4] to get [1, 4].
- Merge [3, 5] and [1, 4] to get [1, 3, 4, 5].
- Merge [2] with itself to get [2].

### Conquer Phase (Merging Final Lists):

Merge ```[1, 3, 4, 5]``` and [2] to get ```[1, 2, 3, 4, 5]```.
The sorted array is now ```[1, 2, 3, 4, 5]```.

## Time Complexity
Merge Sort has a time complexity of O(n log n) in all cases (worst-case, average-case, and best-case), where 'n' is the number of elements in the array. It is an efficient sorting algorithm and is often used for sorting large datasets.

## Implementation
You can find a C implementation of the Merge Sort algorithm in the merge_sort.c file in this repository.

## Usage
To use Merge Sort in your C program, you can include the merge_sort.c file and call the mergeSort() function, passing your array and its size as arguments.

```c
#include <stdio.h>
#include "merge_sort.c"

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
```

## License
This project is licensed under the MIT License.

Feel free to use, modify, and distribute the code for educational and open-source purposes.

Enjoy exploring and learning about the Merge Sort algorithm! If you have any questions or suggestions, please feel free to open an issue or reach out to the maintainers.

Happy coding!
