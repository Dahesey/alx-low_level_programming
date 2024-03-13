#include "search_algos.h"

/**
 * binary_search - searches_for a_value in_a_sorted_array
 * @array: pointer_to the_first element_of the_array
 * @size: number_of_elements in_the_array
 * @value: value_to_search_for
 * Return: -1 if_not found_index of_value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x, right, left;

	/*Check if array is NULL*/
	if (array == NULL)
	return (-1);

	/*reiterate through array*/
	for (left = 0, right = size - 1; right >= left;)
	{
		/*Print display*/
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

			x = left + (right - left) / 2;
			if (array[x] == value)
				return (x);
			if (array[x] > value)
				right = x - 1;
			else
				left = x + 1;
	}
	return (-1);
}
