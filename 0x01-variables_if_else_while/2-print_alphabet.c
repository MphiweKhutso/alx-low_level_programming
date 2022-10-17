#include <stdio.h>
/**
 * main - print alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putcher(lc);
	}
	putcher('\n');
	return (0);
}
