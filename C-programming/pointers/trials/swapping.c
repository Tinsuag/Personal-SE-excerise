/**
 * main - check the code
 *
 * Return: Always 0.
 */
//#include "tinsaew.h"
#include "1-swap.c"
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}