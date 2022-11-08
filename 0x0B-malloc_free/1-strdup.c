#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int copyString;
	int checkSize;
	char *s1;

	if (str == NULL)
		return (NULL);

	for (checkSize = 0; str[checkSize] != 0; checkSize++)
	{
	}
	s1 = malloc(sizeof(char) * checkSize + 1);
	if (s1 == NULL)
		return (NULL);

	for (copyString = 0; str[copyString] != 0; copyString++)
	{
		s1[copyString] = str[copyString];
	}
	return (s1);
}
