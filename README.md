# C - Sorting algorithms & Big O
**About:** In this project, we write different sorting functions.

## Objectives:
* To know at least four different sorting algorithms

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.  Insertion Sort builds a sorted array one element at a time by repeatedly taking elements from the unsorted part and inserting them into their correct position. Selection Sort divides the array into a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and swaps it with the first unsorted element. Merge Sort is a divide-and-conquer algorithm. It divides the unsorted list into n sub-lists, each containing one element, then repeatedly merges sub-lists to produce new sorted sub-lists until there is only one sub-list remaining.

* To know what is the Big O notation, and how to evaluate the time complexity of an algorithm
Big O notation is a mathematical notation used in computer science to describe the performance or complexity of an algorithm. It provides an upper bound on the growth rate of an algorithm's time complexity in the worst-case scenario, as the input size approaches infinity. In simpler terms, Big O notation helps us understand how an algorithm's runtime or space requirements scale with the size of the input.
To evaluate the time complexity of an algorithm and express it in Big O notation, follow these steps:
Identify Basic Operations, Count Operations, Eliminate Constants, Express in Big O Notation, Identify the Big O Class

* To know how to select the best sorting algorithm for a given input

Selecting the best sorting algorithm for a given input depends on various factors such as the characteristics of the input data, the size of the dataset, and the specific requirements of the application. Here are some considerations to help you choose the most appropriate sorting algorithm: Input Size, Data Characteristics:, Stability, Memory Usage, Adaptability, Application Requirements and Language and Library Considerations

* To know what is a stable sorting algorithm
A stable sorting algorithm is an algorithm that maintains the relative order of equal elements in the sorted output as it appeared in the original unsorted input. In other words, if two elements have equal keys in the input, and one comes before the other, then their order will remain the same in the sorted output.

Stability is an important property in certain applications, such as when you are sorting a dataset based on multiple criteria or when you want to preserve the order of elements with equal keys. For example, if you are sorting a list of people by age and then by name, a stable sort ensures that individuals with the same age will be listed in alphabetical order by name. Stable sorting algorithms are particularly useful in situations where the original order of equivalent elements carries meaning and needs to be preserved in the sorted result. When stability is not a concern, other sorting algorithms that may have better average-case performance, like Quick Sort, can be considered.

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is **README.md** file at the root of the **holbertonschool-sorting_algorithms**
* Not allowed use global variables
* No more than 5 functions per file
* The C standard library is allowed
* The prototypes of all the functions were included in the header file called sort.h
* All the header files are include guarded

## FILES
|File|Description|
|---|---|
|[README.md](https://github.com//master/README.md)|Information about this repository|
|[print_array.c](https://github.com/ZeynalMustafayev/holbertonschool-sorting_algorithms/blob/master/print_array.c)|Will be compiled with our functions during the correction.|
|[print_list.c](https://github.com/ZeynalMustafayev/holbertonschool-sorting_algorithms/blob/master/print_list.c)|Will be compiled with our functions during the correction.|
|[0-bubble_sort.c](https://github.com/ZeynalMustafayev/holbertonschool-sorting_algorithms/blob/master/0-bubble_sort.c)|Sorts an array of integers in ascending order using the Bubble sort algorithm.|
|[1-insertion_sort_list.c](https://github.com/ZeynalMustafayev/holbertonschool-sorting_algorithms/blob/master/1-insertion_sort_list.c)|Sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.|
|[sort.h](https://github.com/ZeynalMustafayev/holbertonschool-sorting_algorithms/blob/master/sort.h)|Including essential libraries and structs for this project.|
## Authors/Collaborators
*       Zeynal Mustafayev-[Github](https://github.com/ZeynalMustafayev/)
*       Cahid Cebizade-[Github](https://github.com/Lcahid/)
