#include "holberton.h"
/**
 * at_oi - Converton char to int.
 * @arr: String to be convert.
 * Return: Converted string.
 */
int at_oi(char *arr)
{
	int i, convert = 0;

	for (i = 0; arr[i] != '\0'; ++i)
	{
		convert = convert * 10 + arr[i] - '0';
	}

	return (convert);
}
