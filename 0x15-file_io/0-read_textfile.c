#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
size_t read_textfile(const char *filename, size_t letters)
{
int o, r, w, total = 0;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
o = open(filename, O_RDONLY);
if (o == -1)
{
free(buffer);
return (0);
}
do {
r = read(o, buffer + total, letters - total);
if (r == -1)
{
free(buffer);
return (0);
}
total += r;
} while (r > 0 && total < (int)letters);
w = write(STDOUT_FILENO, buffer, total);
if (w == -1 || w != total)
{
free(buffer);
return (0);
}
free(buffer);
close(o);
return (w);
}
