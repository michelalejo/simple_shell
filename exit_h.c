#include "holberton.h"
/**
 * exit_h - Exit Shell Program.
 * @argv: Arguments.
 * Return: Return intergers depending of the exit case.
 */
int exit_h(char *argv[])
{
	int value = 0;

	if ((_strncmp(argv[1], "exit", 4) == 0) && (argv[2] == NULL))
	{
		return (0);
	}
	if ((_strncmp(argv[1], "exit", 4) == 0) && (argv[2] != NULL))
	{
		value =	at_oi(argv[2]);
		return (value);
	}
	return (0);
}
