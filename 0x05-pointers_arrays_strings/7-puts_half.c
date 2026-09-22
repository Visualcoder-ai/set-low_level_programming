#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string to process.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine starting index based on even or odd length */
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2 + 1;
	}

	/* Print from the calculated midpoint to the end */
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
