#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: the source string
 * Return: the destinantion string
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int scrlen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		scrlen++;
	for (i = 0 ; i <= scrlen ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
