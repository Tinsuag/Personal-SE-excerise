#include "li_t.h"
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			break;
		count++;
		h = h->next;
	}
	return (count);
}
