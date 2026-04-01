Similarities and differences between Bubble Sort, Selection Sort, and Insertion Sort



SIMILARITIES:-

1. Comparison-Based Sorting

All three algorithms compare elements to determine their correct order.

Example comparison:

if(arr[i] > arr[j])
2. Time Complexity (Worst & Average)
Case	Complexity
Worst Case	
𝑂(𝑛^2)

O(n^2)
Average Case	
𝑂(𝑛^2)
O(n^2)

This happens because these algorithms compare elements multiple times using nested loops.

3. In-Place Sorting

All three algorithms are in-place, meaning they do not require extra memory.

Space Complexity:

O(1)

They only use a few temporary variables for swapping.

4. Easy to Implement

These are simple sorting algorithms, which is why they are usually the first algorithms taught in DSA.

5. Not Efficient for Large Datasets

For large inputs, these algorithms are slow compared to:

Merge Sort
Quick Sort
Heap Sort




Key Differences


Feature	Bubble Sort	Selection Sort	Insertion Sort


Basic Idea
BUBBLE:-  Repeatedly swap adjacent elements
SELECTION:- Select minimum element and place at correct position
INSERTION:- Insert element into sorted part


Swaps

	Many swaps(BUBBLE)
    Very few swaps(SELECTION)
    Mostly shifting(INSERTION)

Stable

Yes(BUBBLE)
No(SELECTION)	
Yes(INSERTION)
Adaptive	
Yes (optimized version)(BUBBLE)
No	(SELECTION)
Yes(INSERTION)



Best Case	

O(n)(BUBBLE)	
𝑂(𝑛^2)(SELECTION)
O(n) (INSERTION)	

Comparisons:-	Many	Fixed number	Depends on order
Works Best For:- Almost sorted lists	When swaps are expensive	Small or nearly sorted data
Working Idea
1. Bubble Sort

The largest element bubbles to the end after each pass.

Example array:

5 3 4 1

Passes:

Pass 1 → 3 4 1 5
Pass 2 → 3 1 4 5
Pass 3 → 1 3 4 5


2. Selection Sort 

Array:

5 3 4 1

Selection sort finds the minimum element from the unsorted part and swaps it with the first unsorted index.

Pass 1

Find minimum from index 0 → 3

5 3 4 1
      ↑ min

Swap with first element.

1 3 4 5
Pass 2

Find minimum from index 1 → 3

1 | 3 4 5
    ↑ min

No swap needed.

1 3 4 5
Pass 3

Find minimum from index 2 → 3

1 3 | 4 5
      ↑ min

Array remains:

1 3 4 5
Pass 4

Only one element remains → already sorted.

Important Point

Even if the array becomes sorted early, Selection Sort still performs all passes, which is why it cannot be adaptive.

3. Insertion Sort

Insertion sort builds the sorted portion step by step by inserting elements into their correct position.

Example:

5 | 3 4 1

Steps:

3 5 | 4 1
3 4 5 | 1
1 3 4 5
Swap Comparison (Important Interview Point)
Algorithm	    Swaps

Bubble Sort	    Highest
Selection Sort	Minimum
Insertion Sort	Moderate (uses shifting)

Selection Sort performs at most 
n−1 swaps.

What is Adaptive Sorting?

An adaptive sorting algorithm performs faster when the input array is already or nearly sorted.

Example:

1 2 3 4 5
Insertion Sort → O(n)
Optimized Bubble Sort → O(n)
Selection Sort → still O(n²)
Best Algorithm Among These Three

Generally:

Insertion Sort is the best among these three because:

It is adaptive
It is stable
Performs fewer operations for nearly sorted arrays
Interview One-Line Summary

You can conclude like this:

Bubble Sort repeatedly swaps adjacent elements, Selection Sort repeatedly selects the minimum element and places it in its correct position, and Insertion Sort inserts elements into a sorted portion of the array. All three have 

O(N^2) time complexity, but Insertion Sort performs better for nearly sorted data.