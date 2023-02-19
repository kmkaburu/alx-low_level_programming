#include <stdio.h>
#include <unistd.h>
/**
 *main - Enjoying Sunday
 *Description: WIth my amily
 *Return: Always 0 (Cooking on sunday)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
