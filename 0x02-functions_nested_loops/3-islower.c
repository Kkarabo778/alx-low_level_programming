#include "main.h"
/**
 * _islower - Entry point
 * Description: checks if a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
