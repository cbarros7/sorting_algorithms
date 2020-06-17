#include "sort.h"

/**
 * make_swap - it swaps two numbers.
 * @a: first integer.
 * @b: second integer.
 **/
void make_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * lomuto_sort -  Order a subset of an array of integers according to
 * the lomuto partition scheme (last element as pivot) 
 * @array: array 
 * @start: first position array
 * @end: last position array
 * @size: size of array
 **/
void lomuto_sort(int *array, int start, int end, size_t size)
{
	int partition;

	if (end - start > 0)
	{
		partition = lomuto_partition(array, start, end, size);
		lomuto_sort(array, start, partition - 1, size);
		lomuto_sort(array, partition + 1, end, size);
	}
}

/**
 * lomuto - partition array. 
 * @array: array 
 * @start: first position array
 * @end: last position array
 * @size: size of array
 **/
int lomuto_partition(int *array, int start, int end, size_t size)
{
	int *pivot, above, below;

	pivot = array + end;
	for (above = below = start; below < end; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				make_swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		make_swap(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * selection_sort - sorts an array using
 * selection sort algorithm.
 * @array: a given array.
 * @size: size of the array.
 **/

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
		return;

	lomuto_sort(array, 0, size - 1, size);

}
