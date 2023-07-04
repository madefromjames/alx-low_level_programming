#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two string
 * @dest: destinated string to be copied
 * @src: source to copy string from
 * @n: n byte from source
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, concat;

	for (len = 0; len[dest] != 0; len++)
	{
	}

	for (concat = 0; concat < n && concat[src] != 0; concat++)
	{
		dest[len] = src[concat];
		len++;
	}
	return (dest);
}
