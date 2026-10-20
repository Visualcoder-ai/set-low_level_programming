#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void _print_number(int n)
{
	if (n / 10)
		_print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	_print_number(argc - 1);
	_putchar('\n');

	return (0);
}
