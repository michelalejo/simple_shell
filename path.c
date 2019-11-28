#include "holberton.h"
/**
 * path - Path Verificator.
 * @av: Argungents.
 * @envp: Enviaroment.
 * Return: Path or 0;
 */
char *path(char av[],  char *envp[])
{
	int i = 0, str = 1;
	char *tmp = NULL, *token = NULL;
	static char *buf;
	struct stat st;

	for (i = 0; envp[i] != NULL; i++)
		if (_strncmp(envp[i], "PATH=", 5) == 0)
			break;
	tmp = _strdup(envp[i]);
	token = strtok(tmp, ":");
	for (i = 0; token != NULL; i++)
	{
		buf = malloc((_strlen(token) + _strlen(av) + 2) * sizeof(char));
		str_cat(buf, token);
		if (buf[i - 1] != '/')
			str_cat(buf, "/");
		str_cat(buf, av);
		str = stat(buf, &st);
		if (str == 0)
			return (buf);
		free(buf);
		token = strtok(NULL, ":");
	}
	free(tmp);
	return (av);
}
