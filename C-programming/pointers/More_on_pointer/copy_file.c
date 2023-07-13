#include <stdio.h>

void main()
{
    int c;
    c = getchar();
    if (c==EOF){
        putchar(EOF);

    }
    while (c!=EOF)
    {
        putchar(c);
        c=getchar();
         if (c==-1){
            putchar(c);
        
    }
    }
    
}