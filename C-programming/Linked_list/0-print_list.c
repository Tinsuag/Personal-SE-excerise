#include "li_t.h"
size_t print_list(const list_t *h)
{
	int count = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s", h->len, h->str);
			break;
		} else
		{
			printf("[%u] %s", h->len, h->str);
			h = h->next;			
		}
		count++;
	}
	return (count);
}
