#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: The main string to search in
 * @needle: The substring to locate
 *
 * Return: Pointer to beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return (NULL);
}
