#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int b16;
	char ch;

	for (b16 = 0; b16 <= 9; b16++)
	{
		putchar (b16 + '0');
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');

	return (0);
}
