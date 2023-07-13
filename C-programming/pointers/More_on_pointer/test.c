#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char _strcat(char *dest, char *src,int n)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/* iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2]&&n>=c2 ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;
    int n;

    printf("%s\n", s1);
    printf("%s", s2);
    int n=1;
    ptr = _strncat(s1, s2, n);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    n=1024;
    ptr = _strncat(s1, s2, n);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}