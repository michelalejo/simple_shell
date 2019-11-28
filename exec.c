#include "holberton.h"
/**
 * exec_ve - Execve Funtion.
 * @ac: Argc.
 * @av: Argv.
 * @envp: Enviroment.
 * @f: Time promgram execute.
 * Return: Void.
 */
void exec_ve(int ac, char *av[], char *envp[], int f)
{
	int i = 0;
	char *paths = NULL;

	(void) f;
	paths = path(av[1], envp);
	if (ac >= 1)
	{
		i = execve(paths, (av + 1), envp);
		if (i == -1)
		{
			perror("error");
			free(paths);
			exit(0);
		}
	}
}
