#include "holberton.h"
/**
* _strstr - locates a substring.
*
* Return: pointer to byte in haystack that matches any byte from needle.
* @needle: pointer to string for which to search.
* @haystack:pointer string in which to search for substring.
*/
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	b = needle;
	if (*b == 0)
		return (haystack);
	for (; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
			continue;
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++)
				break;
		}
		b = needle;
	}
	return (0);
}
