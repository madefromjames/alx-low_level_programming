#include "main.h"
#include <string.h>

/**
 * _strcat - joins two string
 * @dest: string destination to be copied
 * @src: string source to be copied
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}

	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		dest[len1] = src[len2];
		len1++;
	}
	return (dest);
}
