#include <stdio.h>
#include <unistd.h>
/**
 *main- Enjoying sunday
 *Description: Print base 16 numbers
 *Return: Always 0 (sunday)
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
