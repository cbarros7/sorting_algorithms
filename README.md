# C - Sorting algorithms & Big O :robot:

In this project, we implemented twelve different sorting algorithms like Bubble sort, insertion sort, selection sort and quick sort.  

## Requeriments :bookmark_tabs:

* Allowed editors: ```vi```, ```vim```, ```emacs```
* Programs and functions will be compiled with ```gcc 4.8.4``` using the flags ```-Wall``` ```-Werror``` ```-Wextra``` ```and -pedantic```
* All files should end with a new line
* Code should use the ```Betty``` style. it will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style\
.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* No more than 5 functions per file
* The prototypes of all your functions should be included in your header file called ```hash_tables.h```
* All your header files should be include guarded

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Helper Files :raised_hands:

* [print_array.c](./print_array.c): C function that prints an array of
integers. Provided by Holberton School.
* [print_list.c](./print_list.c): C function that prints a `listint_t`
doubly-linked list. Provided by Holberton School.

## Header Files :file_folder:

* [sort.h](./sort.h): Header file containing definitions and prototypes for
all types and functions written for the project.


Function Prototypes:

| File                       | Prototype                                         |
| -------------------------- | ------------------------------------------------- |
| `print_array.c`            | `void print_array(const int *array, size_t size)` |
| `print_list.c`             | `void print_list(const listint_t *list)`          |
| `0-bubble_sort.c`          | `void bubble_sort(int *array, size_t size);`      |
| `1-insertion_sort_list.c`  | `void insertion_sort_list(listint_t **list);`     |
| `2-selection-sort.c`       | `void selection_sort(int *array, size_t size);`   |
| `3-quick_sort.c`           | `void quick_sort(int *array, size_t size);`       |


Data Structures:
```
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

```

## Tasks :page_with_curl:

* **0. Bubble sort**
  * [0-bubble_sort.c](./0-bubble_sort.c): C function that sorts an array of integers
  in ascending order using the Bubble Sort algorithm.
  * Prints the array after each swap.
  * [0-O](./0-O): Text file containing the best, average, and worst case time
  complexities of the Bubble Sort algorithm, one per line.

* **1. Insertion sort**
  * [1-insertion_sort_list.c](./1-insertion_sort_list.c): C function that sorts a
  `listint_t` doubly-linked list of integers in ascending order using the
  Insertion Sort algorithm.
  * Prints the list after each swap.
  * [1-O](./1-O): Text file containing the best, average, and worst case time
  complexities of the Insertion Sort algorithm, one per line.

* **2. Selection sort**
  * [2-selection_sort.c](./2-selection_sort.c): C function that sorts an array of
  integers in ascending order using the Selection Sort algorithm.
  * Prints the array after each swap.
  * [2-O](./2-O): Text file containing the best, average, and worst case time
  complexities of the Selection Sort algorithm, one per line.

* **3. Quick sort**
  * [3-quick_sort.c](./3-quick_sort.c): C function that sorts an array of
  integers in ascending order using the Quick Sort algorithm.
  * Implements the Lomuto partition scheme.
  * Always uses the last element of the partition being sorted as the pivot.
  * Prints the array after each swap.
  * [3-O](./3-O): Text file containing the best, average, and worst case time
  complexities of the Quick Sort Lomuto Partition scheme algorithm, one per line.


  ## Quick start :runner:
Git clone the repository:

```
git clone https://github.com/cbarros7/sorting_algorithms.git
```

## Bugs :loudspeaker:
No known bugs.


## Authors :black_nib:
**Carlos Barros** [Github](https://github.com/cbarros7)
                  [LinkdIn](https://www.linkedin.com/in/carlosbarros7/)
                  [Twitter](https://twitter.com/cbarros27)
                  [Medium](https://medium.com/@cbarros7)

**Ronnie Barrios** [Github](https://github.com/ronniebm)
                  [LinkdIn](https://www.linkedin.com/in/ronnie-barrios-2b21b61a1/?originalSubdomain=co)
                  [Twitter](https://twitter.com/ronniealberto)
                  [Medium](https://medium.com/@RonnieBM)
