#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int omega = 122;
	int alpha;

	for (alpha = 97; alpha <= omega; alpha++)
	{
		putchar(alpha);

		if (alpha == 122)
		{
			alpha = 64;
			omega = 90;
		}
	}
	printf("\n");
	return (0);
}
