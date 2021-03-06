#include "holberton.h"
/**
* leet - checks to see if a character is special.
*
* @s: character to be evaluated
* Return: string
*/
char *leet(char *s)
{
	int i = 0;
	char *p = s;
	int j;
	char text[] = {'A', 'a', 'E', 'e', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (j = 0; s[j] != '\0'; j++)
	{
		i = 0;
		while ((s[j] != text[i]) && (text[i] != '\0'))
		{
			i++;
		}
		if (text[i] != '\0')
		{
			s[j] = code[i];
		}
	}
	return (p);
}
