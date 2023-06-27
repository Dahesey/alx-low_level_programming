#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * Author - Dahesey
 *
 * @ptr: a pointer to the previous allocated memory
 *
 * @old_size: the number of bytes already allocated
 *
 * @new_size: the number of bytes to be allocated
 *
 * Return: ptr to the newly allocated memory or (NULL) if fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_loc;
	char *hold_ptr;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)

	{
		new_loc = malloc(new_size);
		if (new_loc == NULL)
			return (NULL);
		return (new_loc);
	}

	new_loc = malloc(new_size);
	if (new_loc == NULL)
		return (NULL);

	hold_ptr = ptr;
	for (; x < new_size; x++)
	{
		if (x == old_size)
			break;
		new_loc[x] = hold_ptr[x];
	}

	free(ptr);
	return (new_loc);
}
