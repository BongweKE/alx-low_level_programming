#include "main.h"

/**
 * print_diagsums - print the sum of diagonals for a given matrix
 * @a: the multidimensional array containing matrix elements
 * @size: size of the square matrix to calculate sum of
 * principal array members
 */
void print_diagsums(int *a, int size)
{
	int i, n, p_sum, s_sum, *temp;

	temp = a + size - 1; /* use this for the secondary diagonal */
	/**
	 * due to the unique way of storage of multidimensional arrays,
	 * we should be able to skip to diagonal chars' storage buffers
	 * using size + 1
	 */
	n = size + 1;
	/* find sum of principal diagonals */
	p_sum = 0;
	i = 0;

	while (i < size) /* loop in the size of the diagonal */
	{
		p_sum += a[0]; /* add the current principal diagonal */
		a += n;/* on to the next value in the diagonal */
		i++;
	}

	/* find sum of the secondary diagonal */
	/**
	 * It's good to note that when working
	 * in the opposite direction, starting from *(a + size - 1)
	 * the distance between secondary diagonal elements according to
	 * memory storage of 2-d arrays = size - 1
	 */
	n = size - 1;
	s_sum = 0;
	i = 0;
	while (i < size)
	{
		s_sum += temp[0];
		temp += n;
		i++;
	}
	printf("%d, %d\n", p_sum, s_sum);
}
