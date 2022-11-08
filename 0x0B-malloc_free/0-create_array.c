#include "main.h"
/**
 * *create_array - creates an array of chars
 * and initiliazes it wiht specific char
 * @size: size of array
 * @c: specific char
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array_chars;

	array_chars = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (array_chars == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array_chars[i] = c;
	}

	return (array_chars);
}
