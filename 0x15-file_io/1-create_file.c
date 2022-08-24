#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - create a file using given text
 * @filename: name of given file
 * @text_content: content to be used in the file
 *
 * Return: 1 on success, -1 on failure
 *
 * Description: Errors first then methodology
 *
 * Errors
 * 1. File cannot be created e.g NULL filename
 * 2. File cannot be written e.g empty content
 * 3. Write Fails
 * 4. Malloc, Nulls etc
 *
 * Further Requirements
 * if file exists, do not change permissions
 * else set permissions to rw------- (0600)
 * if file already exists, truncate it
 *
 * Methodology
 * check for error 1
 * find strlen to use in write operation
 * check if it exists
 * set to truncate if the file exits already
 * else open using O_CREAT with 0600 mode and check if it worked
 * Check for empty content and create an empty file by exiting
 *
 * using the current settings, write as required
 * use strlen and text_content
 * check for write failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, l;
	/* char *buf; */
	ssize_t w;

	if (filename == NULL)
	{
		return (-1);
	}

	l = _strlen(text_content);

	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		/* to avoid changing permissions */
		fd = open(filename, O_CREAT | O_WRONLY, 00600);
		if (fd == -1)
		{
			return (-1);
		}
	}

	if (text_content == NULL)
	{
		close(fd);
		return (0);
	}

	w = write(fd, text_content, (size_t)l);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
