#include "function_pointers.h"

/**
 * array_iterator - execute a function using array members as arguments
 * during each round of execution
 * @array: array containing function parameters
 * @size: size of the array containing parameters
 * @action: a pointer to the function using array members as parameters
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || size <= 0 || array == NULL)
	{
		/* avoid empty functions */
		return;
	}
	while (i < size)
	{
		/* use different argument during each round of execution */
		action(array[i]);
		i++;
	}
}
