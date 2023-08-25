/**
  * free_list - A function to free a singly list
  * @head: The pointer to the first element in the list
  */
#include "lists.h"
void free_list(list_t *head)
{
	list_t *current, *previous;

	for (current = head, previous = NULL; current != NULL;)
	{
		previous = current;
		current = current->next;
		free(previous->str);
		free(previous);
	}
}
