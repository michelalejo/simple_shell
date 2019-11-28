#include "holberton.h"
/**
 * hsin - Function that handle the signal of ^C.
 * @handle_signal: The signal that enters..
 *
 * Return: Void Funtion.
 */
void hsin(int handle_signal)
{
	if (handle_signal)
		write(STDIN_FILENO, "\n#cisfun$ ", 10);
}
