#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, concat, slen1, slen2;
	int j = 0;
	char *str3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*check the length of s1 and s2*/
	for (slen1 = 0; s1[slen1] != 0; slen1++)
	{
	}
	for (slen2 = 0; s2[slen2] != 0; slen2++)
	{
	}
	/*concat slen1 + slen2 + 1, char by char*/
	concat = slen1 + slen2 + 1;
	/**
	 * allocates a new space in memore, store it in pointer str3
	 * check if the new string == NULL, if true return null
	 */
	str3 = malloc(sizeof(char) * concat);
	if (str3 == NULL)
	{
		return (NULL);
	}
	/** add s1 and s2 to str3[j]*/
	for (i = 0; s1[i] != 0; i++)
	{
		str3[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] != 0; i++)
	{
		str3[j] = s2[i];
		j++;
	}
	str3[j] = 0;
	return (str3);
}
