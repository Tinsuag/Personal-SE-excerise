#include "li_t.h"
#include <string.h>
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	char str2;
	int size = 0;

	str2 = strdup(*str);
	temp->str = str2;
	temp->next = *head;
	while (*str2)
	{
		size++;
		str2++;
	}
	temp->len = size;
	*head = temp;
	return (temp);
}
