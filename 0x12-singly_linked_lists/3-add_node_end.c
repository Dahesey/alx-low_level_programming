/**
  * add_node_end - A function to add nodes to a linked list
  * @head: The head of the list that points to a pointer
  * @s: The pointer string to be added
  * Return: AA pointer to the new node added or NULL if fail
  */
#include "lists.h"
list_t *add_node_end(list_t **head, const char *s)
{
	list_t **pointer;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (s == NULL)
		s = "";
	new_node->str = strdup(s);
	new_node->len = strlen(s);

	for (pointer = head; *pointer != NULL; pointer = &(**pointer).next)
		;
	*pointer = new_node;
	new_node->next = NULL;
	return (new_node);
}
