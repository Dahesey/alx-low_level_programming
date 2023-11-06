/**
 * key_index - A function to return the index of
 * a key inserted into a hash table
 *
 * Author - Dahesey
 *
 * @key: The key to be inserted
 *
 * @size: Size of the array in the hash table
 *
 * Return: The index at which the key will be stored in the array
 */

#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);
	hash_value = hash_djb2(key);
	return (hash_value % size);
}
