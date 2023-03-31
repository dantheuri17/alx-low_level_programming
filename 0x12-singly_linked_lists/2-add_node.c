#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a node 
 * @head: pointer to the head pointer
 * @str: string
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}

	return (0);
}

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: String lenght
 */

int _strlen(const char *s)
{
	int c = 0;
	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}
