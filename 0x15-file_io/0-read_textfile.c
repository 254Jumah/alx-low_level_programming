#include "main.h"
#include <stdlib.h>

/**
 *read_textfile- Read text file print to STDOUT.
 *@filename-name of file name
 *@letters-letters to be used
 *Return: s- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t yd;
ssize_t s;
ssize_t t;

yd = open(filename, O_RDONLY);
if (yd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(yd, buf, letters);
s = write(STDOUT_FILENO, buf, t);
free(buf);
close(yd);
return (s);
}
