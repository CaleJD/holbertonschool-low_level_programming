#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and up to n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2
 *
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *result;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)
		while (s2[len2] != '\0' && len2 < n)
			len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	i = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			result[i] = s1[i];
			i++;
		}
	}

	len1 = 0;
	if (s2 != NULL)
	{
		while (len1 < len2)
		{
			result[i] = s2[len1];
			i++;
			len1++;
		}
	}

	result[i] = '\0';
	return (result);
}
