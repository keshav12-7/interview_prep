1. What is Insertion Sort

Insertion Sort is a simple sorting algorithm that works the way we sort playing cards in our hand.

We take one element at a time and insert it into its correct position in the already sorted part of the array.

Initially:

First element is considered sorted
Remaining elements are unsorted

----------------------------------------------------------------------
2. Example

Array:
[5, 3, 4, 1, 2]

Step-by-step:

Step	Array
Start	5 3 4 1 2
Insert 3	3 5 4 1 2
Insert 4	3 4 5 1 2
Insert 1	1 3 4 5 2
Insert 2	1 2 3 4 5


----------------------------------------------------------------------
3. Algorithm
Start from index 1
Store current element as key
Compare with previous elements
Shift larger elements one position right
Insert the key in correct position

-----------------------------------------------------------------
4. C++ Implementation
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {5,3,4,1,2};
    int n = arr.size();

    insertionSort(arr,n);

    for(int x : arr)
        cout << x << " ";
}

-----------------------------------------------------------------
5. Time Complexity
Case	Time Complexity
Best Case (already sorted)	O(n)
Average Case	O(n²)
Worst Case (reverse sorted)	O(n²)

Reason:
Each element may need to shift through the entire sorted portion.

Worst case operations:

1 + 2 + 3 + ... + (n-1)
≈ n²/2



-------------------------------------------------------------------
6. Space Complexity
O(1)

Because sorting happens in-place.

7. Important Properties (Interview Question)
1. Stable Sorting Algorithm

Yes

Meaning:
If two elements have equal values, their relative order remains same.

Example:

(5,A) (5,B)

After sorting:

(5,A) (5,B)

Order remains same.

2. In-Place Algorithm

Yes.

Because it does not use extra memory except few variables.

3. Adaptive Algorithm

Yes.

If array is already nearly sorted, it performs very fast.



---------------------------------------------------------------------------

8. Why Insertion Sort is Good for Small Data

Insertion sort is preferred when:

Small dataset
Nearly sorted array
Used inside other algorithms

Example:

TimSort
and
Introsort

Both use Insertion Sort for small subarrays.


-------------------------------------------------------------------------


9. Why Not Efficient for Large Data

Because time complexity is O(n²).

Example:

If n = 100000

Operations ≈

100000² = 10^10

Which is too slow compared to:

Algorithm	Complexity
Merge Sort	O(n log n)
Quick Sort	O(n log n)




---------------------------------------------------------------



10. Common Interview Questions
Why does loop start from i = 1?

Because the first element is already considered sorted.

Why do we shift elements instead of swapping?

Shifting reduces number of operations compared to multiple swaps.

Why condition arr[j] > key?

Because we shift elements greater than the key to maintain ascending order.


----------------------------------------------------------------------


11. Optimized Case (Already Sorted)

If array is:

1 2 3 4 5

Then inner loop runs only once each iteration.

Time Complexity:

O(n)


--------------------------------------------------------------------------


✅ Perfect 30-second interview answer

Insertion Sort is a simple sorting algorithm where we build the sorted array one element at a time by inserting each element into its correct position in the sorted portion of the array. It is similar to sorting playing cards. It has time complexity O(n²) in worst and average cases and O(n) in the best case when the array is already sorted. It is an in-place and stable sorting algorithm and works well for small or nearly sorted datasets.