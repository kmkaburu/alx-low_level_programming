#include <stdio.h>

/**
 *main - combinations of three digit
 *
 *Return: Always 0
 */

int main(void)
{
	int c;
	int i;
	int k;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (c < i && i < k)
				{
					putchar(c + '0');
					putchar(i + '0');
					putchar(k + '0');

					if (c + i + k != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
