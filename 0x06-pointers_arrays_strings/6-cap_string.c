#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to modify
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize the first character if it is a lowercase letter */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	while (str[i] != '\0')
	{
		j = 0;
		while (separators[j] != '\0')
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}

	return (str);
}
