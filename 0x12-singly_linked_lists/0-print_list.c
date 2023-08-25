/**
  * print_list - A function that prints all the elements of a list.
  * @h: A pointer to the list
  * Return: The number of nodes
  */
#include "lists.h"
size_t print_list(const list_t *h)
{
	unsigned int q, counter = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			q = h->len;
			printf("[%d] %s\n", q, h->str);
		}
		counter++;
	}
	return (counter);
}
