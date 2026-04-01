Bubble Sort (Complete Interview Answer)



1. Definition

Bubble Sort is a simple comparison-based sorting algorithm where we repeatedly compare adjacent elements and swap them if they are in the wrong order. After every pass, the largest element moves to its correct position at the end of the array, similar to a bubble rising to the surface.


...............................................................


2. Working Idea

Steps:

Start from index 0.
Compare arr[j] and arr[j+1].
Swap if arr[j] > arr[j+1].
Continue till the end of the array.
After the first pass, the largest element is placed at the last position.
Repeat the process for the remaining unsorted part.

Total passes required = n − 1


.........................................................


3. Basic Implementation (C++)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    int arr[]={5,1,4,2,8};
    int n=5;

    bubbleSort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}



.................................................

Optimized Implementation




#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped = false;

        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false)
        break;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;

    bubbleSort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
............................................................


4. Why is the inner loop from 0 to n-i-1?

Explanation:

After every pass:

The largest element moves to its correct position at the end.

So after:

1st pass → last element is sorted
2nd pass → last two elements are sorted
3rd pass → last three elements are sorted

Therefore we do not need to check those elements again.

That is why:

j < n - i - 1

Meaning:

Ignore the last i sorted elements
Compare until the unsorted part


..........................................................


5. Time Complexity

Case	Time Complexity
Best Case	O(n) (when array already sorted with optimization)
Average Case	O(n²)
Worst Case	O(n²)
Why O(n²)?

Because we use two nested loops

Outer loop → n
Inner loop → n

So total comparisons ≈ n²




6. Space Complexity
O(1)

No extra memory used.


..................................................................


7. What is an In-Place Sorting Algorithm?

A sorting algorithm is in-place if it does not require extra memory and sorts the array using the original memory itself.

Example:

Bubble Sort
Insertion Sort
Selection Sort

Bubble Sort uses only a temporary variable for swapping, so it is in-place.


..............................................................................

8. What is a Stable Sorting Algorithm?

A sorting algorithm is stable if it maintains the relative order of equal elements.

Example:

Original array

(5,A) (3,B) (5,C)

After sorting

(3,B) (5,A) (5,C)

Here A still comes before C, so the order of equal elements is preserved.

Bubble Sort is stable because it only swaps when:

arr[j] > arr[j+1]

not when equal.

...............................................................

9. Why Bubble Sort is Not Efficient for Large Datasets

Reasons:

1. Quadratic Time Complexity
O(n²)

Example:

If

n = 100000

Operations ≈

100000² = 10^10

Which is extremely slow.

2. Too Many Comparisons

Even if elements are almost sorted, the algorithm still performs many comparisons.

3. Better Algorithms Exist

Faster algorithms:

Algorithm	Time Complexity
Merge Sort	O(n log n)
Quick Sort	O(n log n)
Heap Sort	O(n log n)
10. Optimized Bubble Sort

Observation:

If during a pass no swap occurs, the array is already sorted.

So we stop early.


11. Best Case Complexity (Optimized Version)

If the array is already sorted:

O(n)

Because the algorithm stops after one pass.

12. Key Interview Summary (Perfect 40-second Answer)

Bubble Sort is a comparison-based sorting algorithm where adjacent elements are compared and swapped if they are in the wrong order. After each pass, the largest element moves to the end of the array. It requires up to n−1 passes. The time complexity is O(n²) in the average and worst cases and O(n) in the best case with optimization. The algorithm is in-place since it uses constant extra space and it is stable because it preserves the relative order of equal elements. However, it is inefficient for large datasets due to its quadratic time complexity.



1. How many swaps will Bubble Sort perform?
Question

Given an array, how many swaps will Bubble Sort perform to sort it?

Example
[5, 3, 2, 4, 1]

Key Idea

The number of swaps in Bubble Sort equals the number of inversions in the array.

What is an inversion?

A pair (i, j) such that

i < j  and  arr[i] > arr[j]

Example:

Array
[5,3,2,4,1]

Inversions:

(5,3)
(5,2)
(5,4)
(5,1)
(3,2)
(3,1)
(2,1)
(4,1)

Total inversions = 8

So Bubble Sort performs 8 swaps.

This is a very common interview concept.

2. Can Bubble Sort detect if the array is already sorted?
Expected Answer

Yes.

Using a swap flag optimization.

If during a pass no swap occurs, it means the array is already sorted and we can terminate early.

Example:

[1,2,3,4,5]

Only one pass happens.

Time complexity becomes:

O(n)
3. How many passes are required in Bubble Sort?
Question

If an array has n elements, how many passes are required?

Answer

Maximum passes:

n - 1

Because after every pass one element reaches its correct position.

Example:

5 elements → maximum 4 passes

But with optimization it can be less.

4. Trick Question (Many candidates fail)
Question

Will Bubble Sort work if we compare only non-adjacent elements?

Example

arr[i] with arr[i+2]
Answer

No.

Bubble Sort specifically works because adjacent swaps move elements gradually to their correct positions.

If we swap non-adjacent elements, the algorithm logic breaks.

5. Real Interview Follow-up

Sometimes the interviewer asks:

Which sorting algorithm is similar to Bubble Sort?

Answer:

Insertion Sort

Both:

Compare neighboring elements
Build sorted portion gradually

But Insertion Sort performs fewer swaps, so it is usually faster.

Pro Tip for Interviews (Important)

When explaining Bubble Sort, always mention these keywords:

Adjacent comparison
Largest element moves to the end
Stable
In-place
O(n²)
Optimization using swap flag