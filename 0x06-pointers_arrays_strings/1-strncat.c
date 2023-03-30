#include "main.h"
/**
 * _strncat - concanates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be append
 * Return: concanated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int scrlen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		scrlen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}


