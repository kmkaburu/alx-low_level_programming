#include <stdio.h>
#include <unistd.h>
/**
 *main - Enjoying sunday
 *Description: WIth friends
 *Return: Always 0 (Sunday)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
