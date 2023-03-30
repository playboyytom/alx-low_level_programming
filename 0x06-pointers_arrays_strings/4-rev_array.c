#include "main.h"
/**
 * reverse_array - it reverses element of an array
 * @n:function parameter
 * @a: function parameter
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

