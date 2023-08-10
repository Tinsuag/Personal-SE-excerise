#include "bit.h"
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;

	if ( (n & mask << index) != 0)
	{
		return (1);
	}else
		return (0);
}
