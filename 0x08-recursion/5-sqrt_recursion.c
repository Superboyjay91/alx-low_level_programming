
#include "main.h"

/**
 * _sqrt_recursion - return the square root of n
 * @n: get the value from user
 * Return: return the square root of users number
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

