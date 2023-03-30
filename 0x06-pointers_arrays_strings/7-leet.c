#include "main.h"
/**
 * leet - leet encoding
 * @str: string to be encoded
 * Return: str
 */

char *leet(char *str)
{
	int i, j;

	char *leet_str = str;
	char *letters = "aAeEoOtTlL";
	char *replacements = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				leet_str[i] = replacements[j];
				break;
			}
		}
	}
	return (leet_str);
}

