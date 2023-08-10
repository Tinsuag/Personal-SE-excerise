#include "bit.h"

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;
*n = *n | (mask << index);
return (*n);
}
