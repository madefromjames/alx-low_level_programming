#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string in reverse
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int rev, temp;

	for (rev = 0; rev < len / 2; rev++)
	{
		temp = s[rev];
		s[rev] = s[len - rev - 1];
		s[len - rev - 1] = temp;
	}
}
