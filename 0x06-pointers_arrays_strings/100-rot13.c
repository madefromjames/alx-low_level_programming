#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @s: string
 * Return: Always 0
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lookupTable[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; alphabet[j] != 0; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = lookupTable[j];
				break;
			}
		}
	}

	return (s);
}
