#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all base 16 numbers in lowercase using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
