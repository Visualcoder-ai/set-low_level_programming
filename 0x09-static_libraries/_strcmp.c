#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Negative integer, 0, or positive integer if s1 is less than,
 * equal to, or greater than s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
