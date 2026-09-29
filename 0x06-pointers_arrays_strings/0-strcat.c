#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to append to
 * @src: The source string to append
 *
 * Return: A pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of dest (up to the null terminator) */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy characters from src to the end of dest */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Null-terminate the combined string */
	dest[dest_len + i] = '\0';

	return (dest);
}
