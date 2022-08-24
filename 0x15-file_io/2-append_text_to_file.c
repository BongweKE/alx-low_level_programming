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
 * append_text_to_file - add text at the end of a file
 *
 * @filename: name of file to be operated on
 * @text_content: Content to be appended at end of file
 *
 * Return: 1 or -1 on failure
 *
 * Description: Start with errors to be expected then algorithm
 *
 * Errors
 * 1. Filename is NULL, if content is null just exit with success
 * 2. File doesn't exist: Do not create
 * Note that permissions might affect ability to open
 * 3. Unable to open file
 * 4. Unable to write to file
 *
 * Methodology
 * First Check for error one
 * Try to open but exit in case it doesn't exist or there's restrictions
 * use open with append readonly flag then check if can be opened
 * check for error 2
 *
 * then use write with count 0 to check for errors
 * maybe check for EBADF to see if it's open for writing
 *
 * check for error 3
 *
 * If it's okay, now write onto it with _strlen as count
 * close fd at any suitable point to avoid append errors
 *
 * check for error 4
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int l, fd;
	ssize_t bytz;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
	{
		return (-1);
	}

	bytz = write(fd, text_content, 0);/* check for errors */

	if (bytz == -1)
	{
		return (-1);
	}

	/* now we're sure it's writable */
	l = _strlen(text_content);
	bytz = write(fd, text_content, l);
	if (bytz == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
