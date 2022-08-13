#ifndef LISTS.H
#define LISTS.H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - writes the character c tp stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list *add_node_end(list_t **head, cont char *str);
void free_list(list_t *head);

#endif
