#include "search_algos.h"

/**
 * linear_search - Searches for the value in an array
 *
 * Author Dahesey
 *
 * @array: A pointer to the first element in the array
 *
 * @size: size of the array
 *
 * @value: The value to search for
 *
 * Return: Index of the value in found in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;
	/* Check if array is NULL*/
	if (array == NULL)
		return (-1);
	/*iterate through array*/
	for (x = 0; x < size; x++)
	{
		/*Print comparison*/
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		/*Return index if value is found*/
		if  (array[x] == value)
			return (x);
	}
	/*Return -1 if value is not found*/
	return (-1);
}
