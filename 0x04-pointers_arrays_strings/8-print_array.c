#include <stdio.h>
/**
 * print_array - n number of elements from an array.
 *
 * @a: pointer to an array of elements.
 * @n: number of elements of the array to be printed.
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
