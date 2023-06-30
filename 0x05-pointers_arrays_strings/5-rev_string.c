#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string in reverse
 */
void rev_string(char *s)
{
	char length = strlen(s);
	char *start = s;
	char *end = s + length - 1;


	while (start < end)
	{
		length = *start;
		*start = *end;
		*end = length;

		*start++;
		*end--;
	}
}
