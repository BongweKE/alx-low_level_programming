#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexadecimal
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x0%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - code checker
 *
 * Return: 0 always
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
