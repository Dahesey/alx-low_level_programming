/**
  * add_node - A function to add nodes to a linked list
  * @head: The head of the list that points to a pointer
  * @s: A pointer to the nodes
  * Return: A pointer to the new node added
  */
#include "lists.h"
list_t *add_node(list_t **head, const char *s)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (s == NULL)
		s = "";
	new_node->str = strdup(s);
	new_node->len = strlen(s);

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
