#include "holberton.h"
/**
 * rev_string - reverse a string
 *
 * @s: pointer to string to be reversed
 * Return: None
 */
void rev_string(char *s)
{
	char *begin, *end, temp;

	begin = s;
	end = s + _strlen(s) - 1;

	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}
/**
* _strlen - returns length of a string
*
* @s: pointer to string whose length will be returned
* Return: None
*/
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
