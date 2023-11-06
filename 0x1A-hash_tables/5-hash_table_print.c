/**
 * hash_table_print - A function to print a hash table
 *
 * AUthor - Dahesey
 *
 * @ht: The hash table to be printed
 *
 * Return: hash table key and value, nothing if hashtable is NULL
 */

#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	int print = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		current = ht->array[a];
		while (current != NULL)
		{
			if (print)
				printf(",");
			printf("'%s': '%s'", current->key, current->value);
			print = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
