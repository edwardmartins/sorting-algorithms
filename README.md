# A collection of sorting algorithms implemented in C++

A collection of sorting algorithms implemented in C++ to see the advantages and disadvantages of each one of them

## Bubble Sort
A slow sorting algorithm for the simplest data sets

| Case  | Performance |
| :---: | :---: |
| Worst case performance   | O(n^2)  |
| Best case performance  | O(n)  |
| Average case performance  | O(n^2)  |
| Auxiliary Space           | O(1)  |

![bubble-sort-gif-9](https://user-images.githubusercontent.com/36489953/42171410-83532a64-7e19-11e8-95a1-b2dd3aaedc43.gif)


## Insertion Sort
Insertion sort is a simple sorting algorithm that works the way we sort playing cards. It is efficient for (quite) small data sets.  
It is often used when the data set is nearly sorted (it takes minimum time (Order of n)).    
It takes maximum time to sort if elements are sorted in reverse order.
 

| Case  | Performance |
| :---: | :---: |
| Worst case performance   | O(n^2)  |
| Best case performance  | O(n)  |
| Average case performance  | O(n^2)  |
| Auxiliary Space           | O(1)  |

![1_kra0ofxedgi8hvhjffci4w](https://user-images.githubusercontent.com/36489953/42171484-b508016a-7e19-11e8-8d47-3b95d788d579.gif)

## Selection Sort

Selection sort is noted for its simplicity, and it has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited

| Case  | Performance |
| :---: | :---: |
| Worst case performance   | O(n^2)  |
| Best case performance  | O(n^2)  |
| Average case performance  | O(n^2)  |
| Auxiliary Space           | O(1)  |

![selectionsort](https://user-images.githubusercontent.com/36489953/42171344-5554d9d2-7e19-11e8-8537-7811ebbbd1b6.gif)


## Merge Sort
Merge Sort is a Divide and Conquer algorithm that continually splits a list in half and then merge the sublists in a sorted way.    
A single most important advantage of merge sort over quick sort is its stability: the elements compared equal retain their original order.  


| Case  | Performance |
| :---: | :---: |
| Worst case performance   | O(n log n)  |
| Best case performance  | O(n log n)  |
| Average case performance  | O(n log n)  |
| Auxiliary Space           | O(n)  |  


![merge-sort-example-300px](https://user-images.githubusercontent.com/36489953/42171944-ed5814c8-7e1a-11e8-9d30-10ae8047bb17.gif)

## Quick sort

Quick Sort is a recursive sorting algorithm that is more effective than other O(nlogn) algorithms for large datasets that fit in memory, but is unstable. Quick Sort in general does not requiere extra space while Merge Sort requires O(n) extra storage

| Case  | Performance |
| :---: | :---: |
| Worst case performance   | O(n^2)  |
| Best case performance  | O(n log n)  |
| Average case performance  | O(n log n)  |
| Auxiliary Space           | O(log(n)) |

![quicksort-example](https://user-images.githubusercontent.com/36489953/42190383-0923306a-7e5d-11e8-86b3-1e9f7a79b782.gif)
