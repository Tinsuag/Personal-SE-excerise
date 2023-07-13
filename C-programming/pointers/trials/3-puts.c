#include <stdio.h>

void _puts(char *str){
    for(int i=0;*str!='\0';++str)
    putchar(*str+i);
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}