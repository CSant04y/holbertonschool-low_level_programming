#include "holberton.h"
/**
 * create_file - This function creates a file
 * @filename: this is a pointer to the name of the string
 * @text_content - This is the text we want to copy into the file
 * Return: is 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0, wrt;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content == NULL)
        {
                close(fd);
                return (1);
        }
	while (text_content[count])
		count++;

	wrt = write(fd, text_content, count);
        close(fd);
        if (wrt == -1)
                return (-1);
        return (1);

}
