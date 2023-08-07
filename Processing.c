#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //file handling part
    FILE *filename;
    char ch[100];
    filename = fopen("filename.txt", "r");
    // opens the file name called "filename.txt" and with
    printf("%s", fgets(ch,60,filename));
    fclose(filename);
    return (0);
}