#include "holberton.h"
/**
 * promp - Promp Funtion.
 * @ac: Argc.
 * @av: Argv.
 * @envp: Envp.
 * @f: Times program execute.
 * Return: 0.
 */
int promp(int ac, char *av[], char *envp[], int f)
{
	size_t bsize = 32;
	int status = 0, i = 0, chr = 0, mode = 1, exit_r = 0;
	char *token = NULL, *buffer = NULL, *argv[32];
	pid_t kid;

	isatty(STDIN_FILENO) == 0 ? mode = 0 : mode;
	do {
		mode == 1 ? write(STDIN_FILENO, "#cisfun$ ", 9) : mode;
		chr = getline(&buffer, &bsize, stdin);
		if (chr == -1)
		{
			mode == 1 ? write(STDIN_FILENO, "\n", 1) : chr;
			free(buffer);
			return (0);
		}
		if (chr > 1)
		{
			token = strtok(buffer, " \t\n\r");
			argv[0] = av[0];
			for (i = 0; i < 32 && token != NULL; i++)
			{
				argv[i + 1] = token;
				token = strtok(NULL, " \t\n\r");
			}
			argv[i + 1] = NULL;
			if ((_strncmp(argv[1], "exit", 4) == 0))
			{
				exit_r = exit_h(argv), free(buffer);
				return (exit_r);
			}
			kid = fork();
			if (kid < 0)
				perror("fork"), exit(1);
			if (kid == 0)
				exec_ve(ac, argv, envp, f);
			if (kid > 0)
				wait(&status);
		} f++;
	} while (1);
	write(STDIN_FILENO, "\n", 1), free(buffer), exit(0);
}
