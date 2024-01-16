#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t first, second, i;
	int temp;

	for (first = 0; first < size - 1; first++)
	{
		for (second = 0; second < size - first - 1; second++)
		{
			if (second < first)
			{
				temp = array[first];
				array[first] = array[second];
				array[second] = temp;
			}
				
		}
		//printf("%lu ", first + 1);
		for (i = 0; i < size; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
	}
}
