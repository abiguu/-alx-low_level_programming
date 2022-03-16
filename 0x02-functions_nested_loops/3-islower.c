#include "main.h"

/**
 * _islower - checks if the character is lowercase or not
 * @c: takes in character
 * Return: 0 for uppercase, 1 for lowercase
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
