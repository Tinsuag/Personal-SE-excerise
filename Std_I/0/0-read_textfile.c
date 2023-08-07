#include "main.h"
/***
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *filename = fopen("Requiescat", "r");
    if (filename == NULL)
    {
        return (0);
    }
    char line[100];
    size_t letter = 0;
    fgets( line, 100,  )
}