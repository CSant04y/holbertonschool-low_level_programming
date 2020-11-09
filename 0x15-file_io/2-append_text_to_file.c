#include "holberton.h"
/**
 * append_text_to_file - This function appends the text to the end of the file
 * @filename: this is the file name that we want to append to
 * @text_content: this is the content we want to fill it with
 * Return: is 1 for success and -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[count])
		count++;
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wrt = write(fd, text_content, count);
	if (wrt == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
