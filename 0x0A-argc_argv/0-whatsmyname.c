#include <stdio.h>

/**
 * main - Prints the program's name, followed by a new line
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
