#include "main.h"

/**
 * str_array - return array of strings of the list->str
 * @head: pointer to first node
 * Return: array of strings
 */
char **str_array(list_t *head)
{
	list_t *node = head;
	size_t i = len_list(head), j;
	char **strs;
	char *str;

	if (!head || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(len_str(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}

		str = cpy_str(str, node->str);
		strs[i] = str;
	}
	strs[i] = NULL;
	return (strs);
}

/**
 * elem_list - print all elements of a linked list
 * @h: pointer to first node
 * Return: the size of list
 */
size_t elem_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		print_str(change_number(h->num, 10, 0));
		printch(':');
		printch(' ');
		print_str(h->str ? h->str : "(nil)");
		print_str("\n");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * node_start - return node whose string starts with prefix
 * @node: pointer to be listed head
 * @prefix: string to match
 * @c: next char after prefix to match
 * Return: to match node or null
 */
list_t *node_start(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = chk_start(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}

/**
 * node_get - get the index of a node
 * @head: pointer to list a head
 * @node: the pointer to the node
 * Return: an index of node or -1
 */
ssize_t node_get(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	return (-1);
}

/**
 * len_list - determine length of linked list
 * @h: pointer to first node
 * Return: size of list
 */
size_t len_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
