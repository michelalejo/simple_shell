#include "holberton.h"
/**
 * *str_cat - concatenates two strings
 * @dest: char dest
 * @src: char src
 * Return: dest.
 */
char *str_cat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; src[j] != '\0';)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char str;
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *arr;
	int i, j;

	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0; str[i]; i++)
	{
	}
	arr = malloc(sizeof(*arr) * (i + 1));
	if (arr == NULL)
	{
		return ('\0');
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	arr[j + 1] = '\n';
	return (arr);
}

/**
 * _strlen - returns the length of a string
 * @s: int s
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strncmp - Implementation of the original strncmp funtion.
 * @s1: String to be compare.
 * @s2: String to be compare.
 * @n: Number of the string s2.
 * Return: 0 if the compare is sucefull or N of diference.
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}
