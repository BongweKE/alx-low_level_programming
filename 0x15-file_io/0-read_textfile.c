#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX
 * standard output
 * @filename: name of the file to read from
 * @letters: number of chars in the file
 *
 * Return:Number of letters read and printed or 0 for failure
 * Description: First errors then methodology
 *
 * Errors
 * 1. @filename is null
 * 2. write fails or does not write the expected amount of bytes
 * 3. file can not be opened or read
 *
 * Methodology
 * Check for error 1
 * First read from the file using the given filename
 * Then check for read error (error number 3)
 * else we have fd
 * fill buffer buf with our fd using read
 * now write using our buffer to the standard POSIX output
 * keep track of write and whether it fails
 * so that we know number of bytes written
 * check for error 2
 *
 * exit successfuly
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytz, w_bytz;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close (fd);
		return (0);
	}
	bytz = read(fd, buf, letters);

	close(fd);
	if (bytz == -1)
	{
		return (0);
	}

	w_bytz = write(STDOUT_FILENO, buf, bytz);
	if (w_bytz == -1)
	{
		return (0);
	}

	return (w_bytz);
}
