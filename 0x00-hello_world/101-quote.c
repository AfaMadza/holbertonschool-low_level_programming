#include <unistd.h>
/**
 * main - Returns a string
 *
 * Description: Returns a string to stderr
 * Section header: Prints out a string
 * Return: Returns a value of 0
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
