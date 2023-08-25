/**
  * list_len - A function to print the number of elements in a node
  * @h: A pointer to the elements to be printed
  * Return: The number of elements
  */
#include "lists.h"
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	for (; h != NULL; h = h->next)
		counter++;
	return (counter);
}
