#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The main string to be examined
 * @needle: The substring to be searched for
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	/* If needle is an empty string, return haystack immediately */
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		/* Compare characters as long as they match and we aren't at needle's end */
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		/* If we reached the end of needle, we found a full match */
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}
