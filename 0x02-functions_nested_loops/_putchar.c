#include <unistd.h>

/**
 * _putchar - main entry
 *
 * Return: success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
