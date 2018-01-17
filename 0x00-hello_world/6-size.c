/**
 * main - Returns the size of types
 *
 * Description: Returns size of all types on a computer
 *section header: Prints out sizes next to types
 * Return: Returns a value of 0
*/
#include <stdio.h>
int main(void)
{
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
