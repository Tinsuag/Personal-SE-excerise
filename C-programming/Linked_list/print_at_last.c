#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/***
 *	void add_at_end - adds a data after the last part of a singly linked list
 *@ptr: points to the heead segment of the liked list
 *@temp: stores the current assigned position of a node
 *	returns nothing
 *	struct mnode - a structure of a singly linked list
 *	main - returns the addition of a function.
*/
struct node
{
	int data;
	struct node *link;
};
int main(void)
{
	add_at_end(head,67);
	return (0);
}
void add_at_end(struct node *head, int data)
{
	struct node *ptr, *temp;

	ptr = head;
	temp = (struct node *)malloc(sizeof(struct node));

	temp->data = data;
	temo->link = NULL;

	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
	printf("%d", *head);
}
