#include <unistd.h>
#include <sys/types.h>
#include <string.h>

/**
 * main - Print a line without using printf or puts
 *
 * Return: 1
 */
int main(void)
{
	char buf[20];
	size_t nbytes;
	ssize_t bytes_written;
	int fd;

	strcpy(buf,
	       "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	nbytes = strlen(buf);
	bytes_written = write(fd, buf, nbytes);
	return (1);
}
