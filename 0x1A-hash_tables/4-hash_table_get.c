/**
 * hash_table_get - A function to retrieve a value associated with a key
 *
 * Author - Dahesey
 *
 * @ht: The hash table
 *
 * @key: the key
 *
 * Return: The key associated with the value or Null when key cannot be found
 */

#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
