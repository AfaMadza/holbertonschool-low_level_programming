#include <stdio.h>
/**
 * main - Returns the size of types
 *
 * Description: Returns size of all types on a computer
 *section header: Prints out sizes next to types
 * Return: Returns a value of 0
*/

int main(void)
{
char c;
int i;
long int l;
long long int M;
float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(M));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
