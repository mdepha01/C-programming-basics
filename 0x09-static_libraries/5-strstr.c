#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * @haystack: pointer pointing to haystack
 * @needle: needle pointer
 * Return: pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0' && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (beginning);
		}
		haystack = beginning + 1;
	}
	return ('\0');
}
