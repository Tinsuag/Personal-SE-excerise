#include "li_t.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	temp->str = *str;
	temp->next = NULL;
	
	head->next = temp;
	return (temp);
}
