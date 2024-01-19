#include "sort.h"
/**
 * selection_sort - sorts an array of integers
 *
 * @array: array to sort
 *
 * @size: size of array
 *
 * Return: array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int first, second;
	int temp;

	for (first = 0; first < size - 1; first++)
	{
		unsigned int min = first;

		for (second = first + 1; second < size; second++)
		{
			if (array[second] < array[min])
			{
				min = second;
				continue;
			}
		}
		if (min != first)
		{
			temp = array[first];
			array[first] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
