#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fileName;
    char ch[100];
    fileName = fopen("filename.txt", "r");
    printf("%s\n", fgets(ch,80,fileName));
    fclose(fileName);
    return 0;
}