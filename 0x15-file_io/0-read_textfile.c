#include "holberton.h"
/**
 * read_textfile - This Reads a file that is passed witha pointer
 * @filename: This a file that is passed to this function
 * @letters: this is the ammount of letters its hould read and count
 * Return: If file cannot be opened or read 0, If filename is NULL return 0
 * if write fails return 0;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, wrt;
	char *ptr;

	ptr = malloc(sizeof(char) * letters);

	if (!ptr)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
		return (0);

	size = read(fd, ptr, letters);

	wrt = write(STDOUT_FILENO, ptr, size);

	close(fd);
	free(ptr);
	return (wrt);
}
