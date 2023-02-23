#include "main.h"

/**
 *print_line - return an underscore n times
 * @n: return an underscore
 * Return: (ALWAYS 0)
 */

void print_line(int n)
{
int line = 1;
for (line = 1; line <= n; line++)
{
if (n <= 0)
_putchar('\n');
else
_putchar('_');
}
_putchar('\n');
}
