
#include "main.h"

/**
 * _sqrt_recursion - return the square root of n
 * @n: get the value from user
 * Return: return the square root of users number
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
