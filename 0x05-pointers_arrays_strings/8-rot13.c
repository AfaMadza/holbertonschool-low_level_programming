#include "holberton.h"
/**
* rot13 - encodes to ROT13
*
* @s: character to be evaluated
* Return: string
*/
char *rot13(char *s)
{
	int i = 0;
	char *p = s;
	int j;
	char text[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char code[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

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
