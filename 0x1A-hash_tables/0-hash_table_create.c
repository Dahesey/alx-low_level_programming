/**
 * hash_table_create - A function to create hash tables
 *
 * Author: Dahesey
 *
 * @size: The size of the hash table
 *
 * Return: A pointer to thenewly created hash table or NULL on failure
 */

#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int a;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t *) * size);
		if (!new_table->array)
		{
			free(new_table);
			return (NULL);
		}
	new_table->size = size;
	for (a = 0; a < size; a++)
		new_table->array[a] = NULL;

	return (new_table);
}
