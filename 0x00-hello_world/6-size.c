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
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
