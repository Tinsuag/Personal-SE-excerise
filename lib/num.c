#include <stdio.h>
#include "main.h"

int main()
{
    int c=9, d=81;
    printf("enter the number");
    scanf("%d",&c);
    scanf("%d",&d);
    add(c,d);
    sub(d,c);
    multiple(c,d);
    division(d,c);
    
    return 0;
}