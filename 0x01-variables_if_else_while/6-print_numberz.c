#include <stdio.h>
#include <unistd.h>
/**
 *main - Enjoying sunday
 *Description: prints char below 10
 *Return: Always 0 (sunday)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
