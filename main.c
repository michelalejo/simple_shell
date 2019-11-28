#include "holberton.h"
/**
 * main - Main funtion.
 * @ac: Argc.
 * @av: Argv.
 * @envp: Environment.
 * Return: Prompr
 */
int main(int ac, char *av[], char *envp[])
{
	int prompr = 0, f = 1;

	signal(SIGINT, hsin);
	if (ac > 1)
		exec_ve(ac, av, envp, f);
	else
		prompr = promp(ac, av, envp, f);
	return (prompr);
}
