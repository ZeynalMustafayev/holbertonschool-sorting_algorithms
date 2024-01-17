#include "sort.h"
/**
 * bubble_sort - sorts an array of integers
 *
 * @array: array to sort
 *
 * @size: size of array
 *
 * Return: array
 */
void bubble_sort(int *array, size_t size)
{
	size_t first, second;
	int temp;

	for (first = 0; first < size - 1; first++)
	{
		for (second = 0; second < size - first - 1; second++)
		{
			if (array[second] > array[second + 1])
			{
				temp = array[second];
				array[second] = array[second + 1];
				array[second + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
